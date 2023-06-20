/*                  GLOVE80 KEY MATRIX / LAYOUT MAPPING
 * ╭────────────────────╮                         ╭────────────────────╮
 * │  0   1   2   3   4 ╰───╮                 ╭───╯  5   6   7   8   9 │
 * │ 10  11  12  13  14  15 │                 │ 16  17  18  19  20  21 │
 * │ 22  23  24  25  26  27 │                 │ 28  29  30  31  32  33 │
 * │ 34  35  36  37  38  39 │                 │ 40  41  42  43  44  45 │
 * │ 46  47  48  49  50  51 │                 │ 58  59  60  61  62  63 │
 * │ 64  65  66  67  68 ╭───┴────────┬────────┴───╮ 75  76  77  78  79 │
 * ╰────────────────────┤ 52  53  54 │ 55  56  57 ├────────────────────╯
 *                      │ 69  70  71 │ 72  73  74 │
 *                      ╰────────────┴────────────╯
 *
 * ╭─────────────────────╮                           ╭─────────────────────╮
 * │ LF6 LF5 LF4 LF3 LF2 ╰───╮                   ╭───╯ RF2 RF3 RF4 RF5 RF6 │
 * │ LN6 LN5 LN4 LN3 LN2 LN1 │                   │ RN1 RN2 RN3 RN4 RN5 RN6 │
 * │ LT6 LT5 LT4 LT3 LT2 LT1 │                   │ RT1 RT2 RT3 RT4 RT5 RT6 │
 * │ LM6 LM5 LM4 LM3 LM2 LM1 │                   │ RM1 RM2 RM3 RM4 RM5 RM6 │
 * │ LB6 LB5 LB4 LB3 LB2 LB1 │                   │ RB1 RB2 RB3 RB4 RB5 RB6 │
 * │ LP6 LP5 LP4 LP3 LP2 ╭───┴─────────┬─────────┴───╮ RP2 RP3 RP4 RP5 RP6 │
 * ╰─────────────────────┤ LH1 LH2 LH3 │ RH3 RH2 RH1 ├─────────────────────╯
 *                       │ LH4 LH5 LH6 │ RH6 RH5 RH4 │
 *                       ╰─────────────┴─────────────╯
 */
#pragma once

#define LF6  0  // left function row
#define LF5  1
#define LF4  2
#define LF3  3
#define LF2  4

#define RF2  5  // right function row
#define RF3  6
#define RF4  7
#define RF5  8
#define RF6  9

#define LN6  10  // left number row
#define LN5  11
#define LN4  12
#define LN3  13
#define LN2  14
#define LN1  15

#define RN1  16  // right number row
#define RN2  17
#define RN3  18
#define RN4  19
#define RN5  20
#define RN6  21

#define LT6  22  // left top row
#define LT5  23
#define LT4  24
#define LT3  25
#define LT2  26
#define LT1  27

#define RT1  28  // right top row
#define RT2  29
#define RT3  30
#define RT4  31
#define RT5  32
#define RT6  33

#define LM6  34  // left middle row
#define LM5  35
#define LM4  36
#define LM3  37
#define LM2  38
#define LM1  39

#define RM1  40  // right middle row
#define RM2  41
#define RM3  42
#define RM4  43
#define RM5  44
#define RM6  45

#define LB6  46  // left bottom row
#define LB5  47
#define LB4  48
#define LB3  49
#define LB2  50
#define LB1  51

#define RB1  58  // right bottom row
#define RB2  59
#define RB3  60
#define RB4  61
#define RB5  62
#define RB6  63

#define LP6  64  // left palm row
#define LP5  65
#define LP4  66
#define LP3  67
#define LP2  68

#define RP2  75  // right palm row
#define RP3  76
#define RP4  77
#define RP5  78
#define RP6  79

#define LH1  52  // left top thumb row
#define LH2  53
#define LH3  54

#define RH3  55  // right top thumb row
#define RH2  56
#define RH1  57

#define LH4  69  // left bottom thumb row
#define LH5  70
#define LH6  71

#define RH6  72  // right bottom thumb row
#define RH5  73
#define RH4  74
