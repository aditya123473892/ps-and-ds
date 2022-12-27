#include<stdio.h>
void main()
{
     int a[100],n,item,i;
     printf("Enter the size of the array: ");
     scanf("%d",&n);
     printf("Enter elements of the array in the sorted order: ");
     for(i=0; i<n; i++)
     {
            scanf("%d", &a[i]);
     }
     printf("Enter the element to be inserted :");
     scanf("%d", &item);
     i = n-1;
     while(item<a[i] && i>=0)
     {
           a[i+1] = a[i];
           i--;
     }
     a[i+1] = item;
     n++;
     printf("After insertion array is :");
     for(i=0; i<n; i++)
     {
        printf("%d\t", a[i]);
     }
}
