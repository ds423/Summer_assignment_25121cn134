#include <stdio.h>

int main()
{
    int n,rem,rev;
    
    rev=0;
    
    printf("enter the number:");
    scanf("%d",&n);
    
    while(n>0)
    {
        rem=n%10;
        rev=10*rev+ rem;
        n/=10;
        
    }
    printf("%d",rev);
    return 0;
}