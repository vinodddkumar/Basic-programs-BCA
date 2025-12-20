#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;   // get last digit
        sum = sum + digit;  // add digit to sum
        num = num / 10;     // remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
//Output:
//Enter a number: 123
//Sum of digits = 6
