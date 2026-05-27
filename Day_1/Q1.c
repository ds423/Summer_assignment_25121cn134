#include <stdio.h>

int main() {
    int n,sum,i;
    sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { sum+=i;
    }
    printf("%d",sum);
    return 0;
}