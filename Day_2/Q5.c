#include <stdio.h>

int main()
{
    int n,i,sum;
    sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    
    while(n>0)
    {
        i=n%10;
        sum+=i;
        n/=10;
        
    }
    printf("%d",sum);
    return 0;
}