#include <stdio.h>

int hibana(int a, int b, int c);
int hibana(int a, int b, int c){
    /*
    - Mengembalikan nilai tertinggi dari 3 input integer
    Contoh:
    hibana (1, 9, 5) = 9
    hibana (10, 3, 5) = 10

    Legal ops   : ! ~ & | + << >>
    Max ops     : 20
    Rating      : 3
    */
   int max, cmp;
   max = a;
   printf("%d\n", max);
   
   // substraction 2's complement
   // shift to extract sign bit
   cmp = (b + (~max) + 1)>>31;
   printf("%d\n", b + (~max) + 1);
   printf("%d\n", cmp);
   max = (cmp & max) | ((~cmp) & b);
   printf("%d\n", max);

   cmp = (c + (~max) + 1)>>31;
   printf("%d\n", c + (~max) + 1);
   printf("%d\n", cmp);
   max = (cmp & max) | ((~cmp) & c);
   printf("%d\n", max);
   printf("(%d & %d) | ((%d) & %d\n)", cmp, max, ~cmp, c);
    return max;
}