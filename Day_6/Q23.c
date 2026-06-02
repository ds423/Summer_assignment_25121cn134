#include <stdio.h>

int countsetbits(int n) {
    int count = 0;

    while (n) {
        count += n & 1;
        n >>= 1;
    }

    return count;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number of set bits: %d\n", countsetbits(num));

    return 0;
}