#include <stdio.h>

int haikei_doppelganger (int x){
    int last_low, last_up, x1, notx1, check1, x2, notx2, check2, x3, notx3, check3, x4, notx4, check4, isall;
    last_low = ~90;
    last_up = ~122;

    x1 = x & 0xff;
    notx1 = ~x1;
    check1 = ((65 + notx1) & (x1 + last_low)) | ((97 + notx1) & (x1 + last_up));

    x2 = (x >> 8) & 0xff;
    notx2 = ~x2;
    check2 = ((65 + notx2) & (x2 + last_low)) | ((97 + notx2) & (x2 + last_up));

    x3 = (x >> 16) & 0xff;
    notx3 = ~x3;
    check3 = ((65 + notx3) & (x3 + last_low)) | ((97 + notx3) & (x3 + last_up));

    x4 = (x >> 24) & 0xff;
    notx4 = ~x4;
    check4 = ((65 + notx4) & (x4 + last_low)) | ((97 + notx4) & (x4 + last_up));

    isall = (check1 & check2 & check3 & check4) >> 31 & 1;

    return isall;
}