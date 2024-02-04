#include <stdio.h>

int hatsune_miku_no_gekishou(int x, int y);
int hatsune_miku_no_gekishou(int x, int y){
    // int negatifx = (x>>31) & (0x1); // 1 jika x negatif
    // int negatify = (y>>31) & (0x1);
    // int hasil = (x+y)>>31 & (0x1); // 1 jika x+y negatif
    int min = (1<<31); // '0b10000000000000000000000000000000'
    int max = ~min; // '0b1111111111111111111111111111111'
    int sum = x + y;
    int negatifx = (x>>31); // 0 if pos, 1 if neg
    int negatify = (y>>31); // 0 if pos, 1 if neg)
    int negatifsum = (sum>>31); // sign of the sum
                // is x and y same sign & is sum same sign with var
    int overflow = ~(negatifx ^ negatify) & (negatifx ^ negatifsum);
                // 1 if same, 0 if diff & 1 if same, 0 if diff
        // ~0
    return (~overflow&sum) | (~negatifx & (overflow&max)) | (negatifx & (overflow&min));
}