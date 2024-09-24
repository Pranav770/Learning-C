#include <stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("Please Enter temperature in Celsius:\n");
    scanf("%f",&celsius);
    fahrenheit=((celsius*9)/5)+32;
    printf("\n%.2f Clesius = %.2f Fahrenheit",celsius,fahrenheit);
    return 0;   
}