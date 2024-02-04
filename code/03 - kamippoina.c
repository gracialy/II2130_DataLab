#include <stdio.h>

int kamippoina(int n);
int kamippoina(int n){
    /*
    - Mengembalikan nilai sigma 0->x 2^x;
    Contoh:
    kamippoina (4) = 31
    kamippoina (2) = 7

    Legal ops   : ! + ~ & ^ | << >>
    Max ops     : 6
    Rating      : 1
    */
   // 2**(n+1) - 1
   // substraction method
   return (1<<(n+1)) + (~1) + 1;
}