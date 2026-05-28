#include <stdio.h>

int main()
{
    int n,rem,rev,temp;
    
    rev=0;
    temp=n;
    
    printf("enter the number:");
    scanf("%d",&n);
    
    while(n>0)
    {
        rem=n%10;
        rev=10*rev+ rem;
        n/=10;
        
    }
    if(temp==rev)
    printf("the given number is a palindrome");
    else
    {printf("the given number is not a palindrome");
    }
    return 0;
}