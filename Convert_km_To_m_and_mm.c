#include <stdio.h>
int main(){
    float mm,cm,m,km;
    printf("\nPlease Enter the Lenght in km:");
    scanf("%f",&km);
    m=km*1000.0;
    cm=km*100000.00;
    mm=km*1000000.00;
     
     printf("\n%.2f kilometer= %.2f Meters",km,m );
     printf("\n%.2f kilometer= %.2f centimeters",km,cm );
     printf("\n%.2f kilometer= %.2f millimeters",km,mm );
return 0;
}