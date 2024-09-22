#include <stdio.h>
int main(){
    int a =5,b=10;
    printf("Before swapping: a=%d ,b=%dA\n",a,b);
    //Arithmetic operations to swap values
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping: a=%d , b=%d\n",a,b);
    return 0;
}