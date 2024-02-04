#include <stdio.h>

int oshama_scramble(int uf){
    unsigned sign;
    int exp, frac, e, m;

    sign = uf >> 31;
    // get 0 1111 1111 0000 0000 0000 0000 0000 0000 0000 0000
    exp = (uf >> 23) & 0xff;
    // get 0 0000 0000 1111 1111 1111 1111 1111 1111 1111 1111
    frac = uf & 0x7fffff;

    // special: NaN and inf
    // exp = 11..11
    if (exp == 0xff){
        return 0x80000000u;
    }

    // denormalized
    // exp = 00..00
    // normalized
    // exp < bias
    // (too small to represent in int)
    if (exp < 127){
        return 0;
    }

    // normalized
    e = exp - 127;
    // value = frac <shifted> abs(e-23)

    // overflow
    if (e >= 31){
        return 0x80000000u;
    }

    if (e > 23){
        frac = frac << (e - 23);
    } else {
        frac = frac >> (23 - e);
    }

    m = 1 + frac << e;

    // (-1)**sign
    if (sign){
        m = -m;
    }

    return m;
}