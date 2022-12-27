#include<stdio.h>
void main()
{
     int a[100],n,i,ind;
     printf("Enter the size of the array: ");
     scanf("%d",&n);
     printf("Enter elements of the array:\n");
     for(i=0; i<n; i++)
     {
            scanf("%d", &a[i]);
     }
     printf("Enter the Index of element to be deleted: ");
     scanf("%d", &ind);
     for (i = ind; i < n-1; i++)
     {
         a[i] = a[i+1];
     }
     printf("After Deletion array is: ");
     for(i=0; i<n-1; i++)
     {
        printf("%d\t", a[i]);
     }
}
