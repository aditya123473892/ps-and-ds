#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,m;
    printf("Enter no of rows of Matrix:");
    scanf("%d",&n);
    printf("Enter no of columns of Matrix:");
    scanf("%d",&m);
    printf("Enter elements of Matrix A:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }  
    }
    printf("Enter elements of Matrix B:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the Subtraction matrices is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
