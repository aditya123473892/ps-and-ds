#include <stdio.h>
void main() {
    int a[10][10],r,c,t,i,j;
    printf("Enter rows and columns:\n");
    scanf("%d %d", &r, &c);
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }    
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
                if (i != j)
                {
                    t=a[i][j];
                    a[i][j] = a[j][i];
                    a[j][i] = t;    
                }        
        }
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < c; i++){
        for (j = 0; j < r; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n"); 
    }
}