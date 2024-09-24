#include <stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("Please Enter the temperatur in Fahrenheit:\n");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit -32)*5/9;
    printf("\n%.2f Fahrenheit =%.2f Clesius",fahrenheit,celsius);
    return 0;
}