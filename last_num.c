#include <stdio.h>
#include <math.h>
int main(){
    int Number,FirstDigit,Count,LastDigit;
    printf("\nPlease Enter any number that you wish:");
    scanf("%d",&Number);
    Count=log10(Number);
    FirstDigit=Number /pow(10,Count);
    LastDigit=Number%10;
    printf("\nThe first digit of the given number%d=%d",Number,FirstDigit);
    printf("\nThe last digit of the given number%d=%d",Number,LastDigit);
    return 0;

}