#include <stdio.h>
int main() 
{  
    int i,n,m, product;
    product=1; 
    n=10;  
    printf("enter a number");  
    scanf("%d",&m);
    for(i=1;i<=n;i++)  
    {
        product*=i;
    }
    printf("%d", product);
    return 0;  
}