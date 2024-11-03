{
  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
    flake-parts = {
      url = "github:hercules-ci/flake-parts";
      inputs.nixpkgs.lib.follows = "nixpkgs";
    };
    glove80-zmk = {
      url = "github:darknao/zmk/darknao/rgb-dts";
      flake = false;
    };
    dtsfmt = {
      url = "github:mskelton/dtsfmt";
      flake = false;
    };
  };

  outputs = { nixpkgs, flake-parts, ... }@inputs:
    flake-parts.lib.mkFlake { inherit inputs; } {
      systems = nixpkgs.lib.systems.flakeExposed;
    };
  perSystem =
    { config
    , pkgs
    , lib
    , system
    , ...
    }:
    let
      inherit (pkgs) callPackage writeShellScriptBin fetchgit;
      inherit (config) packages;
      dtsfmt = pkgs.rustPlatform.buildRustPackage rec {
        pname = "dtsfmt";
        version = "v0.4.0";
        meta.mainProgram = pname;
        src = fetchgit {
          url = "https://github.com/mskelton/dtsfmt";
          rev = "todo";
          hash = "todo";
        };
        cargoHash = "todo";
      };
    in
    {
      packages.format =
        let
          dstfmtrc =
            pkgs.writeText ".dtsfmtrc.toml"
              ''
                				layout = "moergo:glove80"

                				[options]
                				separate_sections = true
                				indent_size = 4
                			'';
        in
        writeShellScriptBin "dtsfmt" ''
          			${lib.getExe dtsfmt} --config-file ${dstfmtrc} $@
          			'';

      devShells.default = pkgs.mkShell { packages = [ packages.format ]; };
      packages.default = packages.firmaware;
      # apps.default = {
      #   type = "app";
      #   program = packages.flash;
      # };
    };
}
