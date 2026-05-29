#include <stdio.h>

int main() 
{
    int a,l,i,j,count=0;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the last number ");
    scanf("%d",&l);
    
    for(j=a;j<=l;j++)
    {
        count=0;
    
        for(i=1;i<=j;i++)
        {
            if(j%i==0)
            {
                count++;
            }
    
        }
        if(count==2)
        {
            printf("the prime number are%d\n",j);
        }
    
    }
    
    return 0;
    
}