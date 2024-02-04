#include <stdio.h>

int ghost_rule(int n);
int ghost_rule(int n){
    /*
    Mengembalikan 1 apabila n merupakan 2^x (x>=0) dan 0 apabila tidak
    
    Legal ops   : ~ & ^ | + << >>
    Max ops     : 20
    Rating      : 2
    */
   // note:
   // xnor: ~(x ^ y) & 1
   // isneg     = (n+1)>>31 & 1
   // isnotneg  = ~((n>>31) ^ 0) & 1;
   // isnotneg  = (~n)>>31 & 1 
   // isnotzero    = ((x | (~x + 1)) >> 31) & 1;
   // isnotzero    = ((~n)+1) >> 31 + 1;
    // https://www.geeksforgeeks.org/check-bitwise-subset-power-two/

   int handlezero, ispow;
   handlezero = ((~n + 1) & ~n)>>31;
   // return 1 if pos, else 0
   ispow =  (n & (n + ~0));
   ispow = ((ispow>>31 | (~ispow + 1)) >> 31) & 1;
   ispow = ispow ^ 1;
    return handlezero & ispow;
}