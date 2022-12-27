#include <stdio.h>
void main()
{
    int a[100],i,j,n,count;
    printf("enter no of elements of array:");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++){
        count=0;
        for (j = i+1; j < n; j++){
            if(a[i]==a[j]){
                printf("%d is repeated.\n",a[i]);
            }
            else{
                count++;
            }       
        }
        if (count == n-i-1){
            printf("%d is not repeated.\n",a[i]);
        }       
    }
}