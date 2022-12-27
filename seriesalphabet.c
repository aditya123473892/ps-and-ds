#include <stdio.h>
void main(){
    int i,j,rows;
    printf("Enter the no. of rows: ");
    scanf("%d",&rows);
    for ( i = 1; i <= rows; i++)
    {
        for ( j = 0  ; j < i; j++)
        {
            printf("%c",'A'+rows-i+j);
        }
        printf("\n"); 
    }
       
}