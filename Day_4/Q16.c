#include <stdio.h>
#include <math.h>

int main() {

    int start, end;

    printf("Enter starting range: ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    printf("Armstrong numbers are:\n");

    for(int num = start; num <= end; num++) {

        int temp, rem, digits = 0;
        int sum = 0;

        temp = num;

       
        while(temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        
        while(temp != 0) {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}