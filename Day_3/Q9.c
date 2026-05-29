#include <stdio.h>

int main() {
    int n,i,count;
    count=0;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>0)
    { for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    }
    if(count==2)
    { printf("the given number is prime number");
    }
    else{
        printf("the given number is not prime number");
    }
         
}