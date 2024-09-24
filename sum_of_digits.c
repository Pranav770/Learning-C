#include <stdio.h>
int main() {
    int n, d1, d2, d3, d4, d5, sum;
    printf("Enter a five-digit number: ");
    scanf("%d", &n);

   d1 = n / 10000;        // Extract the first digit
    d2 = (n / 1000) % 10;  // Extract the second digit
    d3 = (n / 100) % 10;   // Extract the third digit
    d4 = (n / 10) % 10;    // Extract the fourth digit
    d5 = n % 10;           // Extract the fifth digit
        sum = d1 + d2 + d3 + d4 + d5;
        printf("The sum of the digits is: %d\n", sum);
    return 0;
}
