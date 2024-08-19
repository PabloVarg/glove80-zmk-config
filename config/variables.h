/* key positions */
#define POS_LH_T1 52
#define POS_LH_T2 53
#define POS_LH_T3 54
#define POS_LH_T4 69
#define POS_LH_T5 70
#define POS_LH_T6 71
#define POS_LH_C1R2 15
#define POS_LH_C1R3 27
#define POS_LH_C1R4 39
#define POS_LH_C1R5 51
#define POS_LH_C2R1 4
#define POS_LH_C2R2 14
#define POS_LH_C2R3 26
#define POS_LH_C2R4 38
#define POS_LH_C2R5 50
#define POS_LH_C2R6 68
#define POS_LH_C3R1 3
#define POS_LH_C3R2 13
#define POS_LH_C3R3 25
#define POS_LH_C3R4 37
#define POS_LH_C3R5 49
#define POS_LH_C3R6 67
#define POS_LH_C4R1 2
#define POS_LH_C4R2 12
#define POS_LH_C4R3 24
#define POS_LH_C4R4 36
#define POS_LH_C4R5 48
#define POS_LH_C4R6 66
#define POS_LH_C5R1 1
#define POS_LH_C5R2 11
#define POS_LH_C5R3 23
#define POS_LH_C5R4 35
#define POS_LH_C5R5 47
#define POS_LH_C5R6 65
#define POS_LH_C6R1 0
#define POS_LH_C6R2 10
#define POS_LH_C6R3 22
#define POS_LH_C6R4 34
#define POS_LH_C6R5 46
#define POS_LH_C6R6 64
#define POS_RH_T1 57
#define POS_RH_T2 56
#define POS_RH_T3 55
#define POS_RH_T4 74
#define POS_RH_T5 73
#define POS_RH_T6 72
#define POS_RH_C1R2 16
#define POS_RH_C1R3 28
#define POS_RH_C1R4 40
#define POS_RH_C1R5 58
#define POS_RH_C2R1 5
#define POS_RH_C2R2 17
#define POS_RH_C2R3 29
#define POS_RH_C2R4 41
#define POS_RH_C2R5 59
#define POS_RH_C2R6 75
#define POS_RH_C3R1 6
#define POS_RH_C3R2 18
#define POS_RH_C3R3 30
#define POS_RH_C3R4 42
#define POS_RH_C3R5 60
#define POS_RH_C3R6 76
#define POS_RH_C4R1 7
#define POS_RH_C4R2 19
#define POS_RH_C4R3 31
#define POS_RH_C4R4 43
#define POS_RH_C4R5 61
#define POS_RH_C4R6 77
#define POS_RH_C5R1 8
#define POS_RH_C5R2 20
#define POS_RH_C5R3 32
#define POS_RH_C5R4 44
#define POS_RH_C5R5 62
#define POS_RH_C5R6 78
#define POS_RH_C6R1 9
#define POS_RH_C6R2 21
#define POS_RH_C6R3 33
#define POS_RH_C6R4 45
#define POS_RH_C6R5 63
#define POS_RH_C6R6 79


//
// Glove80 key positions index for positional hold-tap
// https://discord.com/channels/877392805654306816/937645688244826154/1066713913351221248
// https://media.discordapp.net/attachments/937645688244826154/1066713913133121556/image.png
//
// |------------------------|------------------------|
// | LEFT_HAND_KEYS         |        RIGHT_HAND_KEYS |
// |                        |                        |
// |  0  1  2  3  4         |          5  6  7  8  9 |
// | 10 11 12 13 14 15      |      16 17 18 19 20 21 |
// | 22 23 24 25 26 27      |      28 29 30 31 32 33 |
// | 34 35 36 37 38 39      |      40 41 42 43 44 45 |
// | 46 47 48 49 50 51      |      58 59 60 61 62 63 |
// | 64 65 66 67 68         |         75 76 77 78 79 |
// |                69 52   |   57 74                |
// |                 70 53  |  56 73                 |
// |                  71 54 | 55 72                  |
// |------------------------|------------------------|
//
//

#define LEFT_HAND_KEYS      \
        0  1  2  3  4         \
        10 11 12 13 14 15      \
        22 23 24 25 26 27      \
        34 35 36 37 38 39      \
        46 47 48 49 50 51      \
        64 65 66 67 68

#define RIGHT_HAND_KEYS     \
                                        5  6  7  8  9 \
                                    16 17 18 19 20 21 \
                                    28 29 30 31 32 33 \
                                    40 41 42 43 44 45 \
                                    58 59 60 61 62 63 \
                                        75 76 77 78 79

#define THUMB_KEYS \
                    69 52       57 74 \
                     70 53     56 73  \
                      71 54   55 72


// Miryoku home row mods and thumb layer keys
// https://sunaku.github.io/home-row-mods.html
// https://github.com/urob/zmk-config#timeless-homerow-mods
//
// TYPING_STREAK_TERM defines how long you need to wait (milliseconds)
// after typing before you can use home row mods again.  It prevents
// unintended activation of home row mods when you're actively typing.
//
#define TYPING_STREAK_TERM 250 // global-quick-tap-ms
//
// KEY_REPEATING_TERM defines how much time you have left (milliseconds)
// after tapping a key to hold it again in order to make it auto-repeat.
//
#define KEY_REPEATING_TERM 100 // "tap then hold" for key auto-repeat
//
// HOMEY_TAPPING_TERM defines how long you need to hold (milliseconds)
// home row mod keys in order to send their modifiers to the computer
// (i.e. "register" them) for mod-click mouse usage (e.g. Ctrl-Click).
//
// NOTE: the "balanced" flavor of ZMK hold-tap for home row mods already
// provides instant modifier activation for keyboard-only usage, so this
// setting is meant for combined keyboard/mouse usage such as mod-clicks.
//
#define HOMEY_TAPPING_TERM 150 // TAPPING_TERM + ALLOW_CROSSOVER_AFTER

//
// THUMB_TAPPING_TERM defines how long you need to hold (milliseconds)
// a thumb key to activate a layer.  Shorter holds are treated as taps.
//
#define THUMB_TAPPING_TERM 200
