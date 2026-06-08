#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, rem, digits = 0;
    int sum = 0, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number", original);
    else
        printf("%d is not an Armstrong number", original);

    return 0;
}