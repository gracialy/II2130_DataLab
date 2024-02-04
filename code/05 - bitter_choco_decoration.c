#include <stdio.h>

int bitter_choco_decoration(int x);
int bitter_choco_decoration(int x){
    /*
    - Mengambalikan x*23
    Contoh:
    bitter_choco_decoration (1) = 23
    bitter_choco_decoration (23) = 529
    bitter_choco_decoration (23) = -1587

    Legal ops   : ! ~ & ^ | + << >>
    Max ops     : 7
    Rating      : 2
    */

   // x * 23 = (x * 16) + (x * 4) + (x * 2) + x
   // x = x<<4 + x<<2 + x<<1 + x;
   return (x<<4) + (x<<2) + (x<<1) + x;
}