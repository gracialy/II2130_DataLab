#include <stdio.h>

int isPositive(int n);
int isPositive(int n){
    return ((n >> 31) & 1) ^ 1;
}

int isPowerofTwo(int n);
int isPowerofTwo(int n){
    // ispowof return 0 if true, else return any other bil
    int ispow = n & (n-1);
    // convert any other bil to 1
    ispow = ((ispow>>31 | (~ispow + 1)) >> 31) & 1;
    // convert 0 to 1, 1 to 0
    ispow = ispow ^ 1;
    // sisa 0 case
    return ispow;
}

int isposnotzero(int n);
int Isposnotzero(int n){
    int isposnotzero = ((~n + 1) & ~n)>>31;
    return isposnotzero;
}

int main(){
    int aidoru = aidoru_shinetai(5);
    printf("%d\n", aidoru);
    int bitter = bitter_choco_decoration(1);
    printf("%d\n", bitter);
    int hib = hibana(1, 9, 5);
    printf("%d\n", hib);

    for (int i = -64; i <= 64; i++){
       printf("%d --> %d %d --> %d\n", i, isPowerofTwo(i), Isposnotzero(i), ghost_rule(i));
    }

    printf("%d --> %d\n",2147483647, isPowerofTwo(2147483647));
    printf("%d --> %d %d --> %d\n",-2147483648, isPowerofTwo(-2147483648), Isposnotzero(-2147483648), ghost_rule(-2147483648));

    for (int i=-64; i<=64; i++){
        printf("%d --> %d\n", i, ghost_rule(i));

    }
    printf("%d --> %d\n", __INT_MAX__, ghost_rule(__INT_MAX__));
    printf("%d --> %d\n", 0x80000000, ghost_rule(0x80000000));
    printf("%d\n", (~0x80000000 + 1)>>31 & 1);

   printf("%d\n", internet_overdose(0xFFFF0000));
   printf("%X\n", 0xFF<<8);
   printf("%X\n", (0xF0<<16) | 0xF0);

   printf("%X\n",  __INT_MAX__);
   printf("%x\n",  ~1);
   printf("%d\n", 0&(0-1));
   printf("%x\n", 0x55 | (0x55<<8) | (0x55<<16) | (0x55<<24));
    return 0;
}