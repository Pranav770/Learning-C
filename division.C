#include <stdio.h>
int main(){
    int number1,number2;
    float quotient,remainder;
    printf("Enter the number to perform division=");
    scanf ("%d",&number1);
    printf("Enter the divisior number=");
    scanf("%d",&number2);
    quotient =number1/number2;
    remainder =number1 % number2;
    printf("The Quotient of %d and %d=%.2f",number1,number2,quotient);
    printf("\nThe Quotient of %d and %d=%.2f\n",number1,number2,remainder);
    
}