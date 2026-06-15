#include <stdio.h>

int main() {
    int n, i, j, match= 0;

    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Duplicate elements:\n");

    for(i=0;i<n;i++) {

        for(j=i+1;j<n;j++) {

            if(arr[i]==arr[j]) {
                printf("%d ",arr[i]);
                match = 1;
                break;
            }
        }
    }

    if(match==0)
        printf("No duplicates");

    return 0;
}