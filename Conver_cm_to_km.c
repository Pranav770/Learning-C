#include <stdio.h>
int main(){
    float cm,meter,km;

    printf("\n Please Enter the length  in cm:");
    scanf("%f",&cm);
    meter=cm/100.0;
    km=cm/100000.0;

    printf("\n Length in meter=%.4f",meter);
    printf("\n Length in kilometer=%.4f",km);
    return 0;

}