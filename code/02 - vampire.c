#include <stdio.h>

int vampire (int x, int y);
int vampire (int x, int y){
    /*
    Jika bit pada posisi yang sama memiliki:
    - nilai yang sama, bit tersebut bernilai 1
    - nilai yang berbeda, bit tersebut bernilai 0
    Contoh:
    vampire (0, 0) = -1 (bit sama semua, maka 0xFFFF_FFFF
    vampire (0, 1) = -2 (bit sama semua kecuali yang terakhir, maka 0xFFFF_FFFE)
    vampire (0xFFFF0000, 0x0000FFFF) = 0 (bit tidak ada yang sama)
    vampire (0x0000000F, 0xFFFFFFF8) = 8 (0b1111 XNOR 0b1000 = 0b0111)
    */
   // bi-implication?
    return (~x & ~y) | (x & y);
}