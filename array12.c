#include <stdio.h>
void main()
{
    int a[100],b[100],c[100],d[100],e[100],i,j,n,m,k=0,g=0,t,p,s,bl,cl;
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
        bl=0;
        for ( j = 0; j < m; j++)
        {
            if (a[i]!=b[j])
            {
                bl++;
            }   
        }
        if (bl==m)
        {
            c[k]=a[i];
            k++;
        }
    }
    for (i = 0; i < n; i++)
    {
        cl=0;
        for ( j = 0; j < m; j++)
        {
            if (b[i]!=a[j])
            {
                cl++;
            }   
        }
        if (cl==m)
        {
            d[g]=b[i];
            g++;
        }
    } 
    for (i = 0; i < k+g; i++)
    {
        if (i<k)
        {
            e[i] = c[i];
        }
        else{
            e[i] = d[i-k];
        }
    }
    printf("Set Symmetric Difference is:\n");
    for (i = 0; i < k+g; i++)
    {
        printf("%d\n",e[i]);
    } 
}