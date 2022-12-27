#include <stdio.h>
void main(){
    int a[100],n,i,p,s,t,j;
    printf(" Enter no. of elements in array: ");
    scanf("%d" , &n);
    printf(" Enter the elements: ");
    for(i = 0 ; i<(n-1);i++){
        scanf("%d", &a[i]);
    }
    for (p = 0; p < (n-1); p++) {
        for (s = 0; s < n-p-2; s++){
            if(a[s] > a[s+1]){
                t = a[s];
                a[s] = a[s+1];
                a[s+1] = t;
            }
        }
    }
    for ( i = 0,j = 1; i < n-1; i++,j++){
        if(a[i] != j){
            printf("missing number is: %d" , j);
            break;
        }
    }
}
