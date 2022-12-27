#include <stdio.h>
void main()
{
    int a[100],n,i,key,mid1,mid2,k,end,start;
    printf("enter no of elements of first set:");
    scanf("%d", &n);
    printf("Enter elements of first set:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d", &key);
    start = 0;
    end=n-1;
    while(start <= end){
        k=(end-start+1)/3;
        mid1= start + k;
        mid2= end - k;
        if (key == a[mid1])
        {
            printf("Element is Present at position: %d", mid1+1);
            break;
        }
        else if (key == a[mid2])
        {
            printf("Element is Present at position: %d", mid2+1);
            break;
        }
        else if (key < a[mid1])
        {
            end = mid1 - 1;    
        }
        else if (key < a[mid2])
        {
            start = mid1 + 1;
            end = mid2 - 1;    
        }
        else if (key > a[mid2])
        {
            start = mid2 + 1; 
        }
        else
        {
            printf("Element not found.");
        }   
    }
}