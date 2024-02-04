#include <stdio.h>

int internet_overdose(int x);
int internet_overdose(int x){
    /*
    - Mengembalikan hasil shuffling terhadap bits dari x, dengan ketentuan:
    original: abcd efgh ijkl mnop ABCD EFGH IJKL MNOP
    shuffle : aabB cCdD eEfF gGhH iIjJ kKlL mMnN oOpP

    Contoh:
    internet_overdose (0xFFFF0000) = 0xAAAAAAAA

    Legal ops:  ! ~ & ^ | + << >>
    Max ops: 60
    Rating: 3
    */
   int t, mask1, mask2, mask3, mask4;
   mask1 = 0xFF << 8;
   mask2 = (0xF0 << 16) | 0xF0;
   mask3 = (0x0C << 24) | (0x0C << 16) | (0x0C << 8) | 0x0C;
   mask4 = (0x22 << 24) | (0x22 << 16) | (0x22 << 8) | 0x22;

   t = (x ^ (x >> 8)) & mask1; x = x ^ t ^ (t << 8); 
   t = (x ^ (x >> 4)) & mask2; x = x ^ t ^ (t << 4); 
   t = (x ^ (x >> 2)) & mask3; x = x ^ t ^ (t << 2); 
   t = (x ^ (x >> 1)) & mask4; x = x ^ t ^ (t << 1); 
   return x;
}