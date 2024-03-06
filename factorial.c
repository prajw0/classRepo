#include <stdio.h>

long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        long fact = factorial(number);
        printf("Factorial of %d is %ld\n", number, fact);
    }

    return 0;
}
