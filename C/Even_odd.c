// Program to check whether a number is even or odd
// Author: Vinod Kumar
// Date: 17/12/25
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}
