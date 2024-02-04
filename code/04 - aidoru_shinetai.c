#include <stdio.h>

// still
int aidoru_shinetai (int a);
int aidoru_shinetai (int a){
    /*
    - Tukarlah bit ke-1 dan bit ke-4 dari a
    Contoh:
    aidoru_shinetai (0b1000) = 0b0001
    aidoru_shinetai (0b0001) = 0b1000
    aidoru_shinetai (0b1010) = 0b0011
    aidoru_shinetai (0b0101) = 0b1100

    Legal ops   : ~ & | << >>
    Max ops     : 15
    Rating      : 2
    */
   
   int non_swapped  =  a & ~0x9;
   int swap_left    = (a & 0x1)<<3;
   int swap_right   = (a & 0x8)>>3;

   return swap_left | non_swapped | swap_right;
}