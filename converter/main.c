#include <math.h>
#include <stdio.h>
#include "convert.h"

int binToDec(long long n1);
long long decToBin(int n2);

int main() {;
    int input;
    long long n1;
    int n2;
    printf("\nChoose what you want to convert\n1. Binary to decimal\n2. Decimal to Binary\n");
    scanf("%d", &input);
    if (input == 1)
    {
        dispBinaryToDec(n1);
    }
    else if (input == 2)
    {
        dispDecimalToBin(n2);
    }
    else
    {
        printf("Wrong input\n");
    }
    
    
    return 0;
}

void dispBinaryToDec(long long n){
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal\n", n, binToDec(n));
}

void dispDecimalToBin(int n){
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d in decimal = %lld in binary\n", n, decToBin(n));
}