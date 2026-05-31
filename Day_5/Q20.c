#include <stdio.h>

int main() {
    int n;
    int max_prime ;


    printf("Enter a positive integer: ");
    scanf("%d", &n);

    
    while (n % 2 == 0) {
        max_prime = 2;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n% i == 0) {
            max_prime = i;
            n /= i;
        }
    }

    if (n > 2) {
        max_prime = n;
    }

    
    printf("The largest prime factor is: %d\n", max_prime);

    return 0;
}