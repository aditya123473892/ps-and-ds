#include <stdio.h>
void main()
{
    int a[100],i,n,b;
    printf("Enter no of elements of array:");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered elements are :");
    for ( i = 0; i < n; i++)
    {
        printf("\t%d",a[i]);
    }
}