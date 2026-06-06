#include <stdio.h>

int factorial(int n) {
    int facto = 1;

    for(int i = 1; i <= n; i++)
        facto *= i;

    return facto;
}

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial = %d", factorial(n));

    return 0;
}