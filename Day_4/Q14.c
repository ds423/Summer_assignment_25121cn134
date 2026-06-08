#include <stdio.h>

int main() {
    int l, a = 0, b = 1, n;

    printf("Enter the number of terms: ");
    scanf("%d", &l);
    for (int i = 0; i < l; i++) 
    {
        if (i <= 1) {
            
            n = i;
        } 
        else {
            
            n = a + b;
            a = b;
            b = n;
        }
        
    }
          printf("%d",n);
    return 0;
}