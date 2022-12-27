#include <stdio.h>
void main()
{
    int a[100],b[100],c[100],i,j,n,m,k=0,t,p,s;
    printf("enter no of elements of first set:");
    scanf("%d", &n);
    printf("Enter elements of first set:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter no  of elements of second set:");
    scanf("%d", &m);
    printf("Enter elements of second set:\n");
    for ( j = 0; j < m; j++)
    { 
        scanf("%d",&b[j]);
    }
    for (i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if (a[i]==b[j])
            {
                c[k] = a[i];
                k++;
            }   
        }
    }
    printf("Intersection is:\n");
    for (t = 0; t < k; t++)
    {
        printf("%d\t",c[t]);
    }   
}