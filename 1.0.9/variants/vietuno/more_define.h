#ifndef _MORE_DEFINE_H_
#define _MORE_DEFINE_H_

#define MID     2
//kxn note
    #if (NUM_DIGITAL_PINS == 20)
    static const uint8_t D2 = 2;
    static const uint8_t D3 = 3;
    static const uint8_t D4 = 4;
    static const uint8_t D5 = 5;
    static const uint8_t D6 = 6;
    static const uint8_t D7 = 7;
    static const uint8_t D8 = 8;
    static const uint8_t D9 = 9;
    static const uint8_t D10 = 10;
    static const uint8_t D11 = 11;
    static const uint8_t D12 = 12;
    static const uint8_t D13 = 13;
    
    #elif (NUM_DIGITAL_PINS >= 70)

    enum{
        D2 = 2,
        D3,
        D4,
        D5,
        D6,
        D7,
        D8,
        D9,
        D10,
        D11,
        D12,
        D13,
        D14,
        D15,
        D16,
        D17,
        D18,
        D19,
        D20,
        D21,
        D22,
        D23,
        D24,
        D25,
        D26,
        D27,
        D28,
        D29,
        D30,
        D31,
        D32,
        D33,
        D34,
        D35,
        D36,
        D37,
        D38,
        D39,
        D40,
        D41,
        D42,
        D43,
        D44,
        D45,
        D46,
        D47,
        D48,
        D49,
        D50,
        D51,
        D52,
        D53,
        D54,
        D55,
        D56,
        D57,
        D58,
        D59,
        D60,
        D61,
        D62,
        D63,
        D64,
        D65,
        D66,
        D67,
        D68,
        D69,
        D70
    };

    #endif
//End kxn note
#endif