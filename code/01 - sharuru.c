#include <stdio.h>

int sharuru (int x, int y);
int sharuru (int x, int y){
    /*
    - bit 1-4 akan diambil dari bit ke 1-4 x
    - bit 5-8 akan diambil dari bit ke 5-8 y
    - bit sisanya akan bernilai 0

    Contoh:
    sharuru (0xFF, 0x00) = 0x0F
    sharuru (0x00, 0xFF) = 0xF0
    sharuru (0x12, 0xAB) = 0xA2
    sharuru (0xF0, 0x12) = 0x10
    */
    return (x & 0x0F) | (y & 0xF0);
}