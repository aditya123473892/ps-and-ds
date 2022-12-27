#include <stdio.h>
void main()
{
    int a[100],n,i,key,c=0;
    printf("enter no of elements of first set:");
    scanf("%d", &n);
    printf("Enter elements of first set:\n");
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched:");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Element is found at position %d",i+1);
            c++;
        }
    }
    if (c == 0)
    {
        printf("Element is not found");
    }
    
}