#include <math.h>
#include <stdio.h>

int binToDec(long long n){
    int dec = 0, i = 0, rest;
    while(n != 0){
        rest = n % 10;
        n /= 10;
        dec += rest * pow(2, i);
        i++;
    }
    return dec;
}

long long decToBin(int n){
    long long bin = 0;
    int i = 1, rest, step = 1;
    while(n != 0){
        rest = n % 2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, rest, n / 2);
        n /= 2;
        bin += rest * i;
        i *= 10;

    }
    return bin;
}