#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }
    }    
    for (int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j){
            transpose[i][c-j-1] = a[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < c; ++i){
        for (int j = 0; j < r; ++j) {
            a[i][j]=transpose[j][i];
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
