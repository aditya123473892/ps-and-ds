#include <stdio.h>
void main(){
    int a[100],i,n,t,p;
    printf("enter no. of elements: ");
    scanf("%d",&n);
    printf("enter the  elements:\n ");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for ( i = 0,p =1; i < (n/2); i++,p++){
        t = a[i];
        a[i] = a[n-p];
        a[n-p] = t;    
    }
    printf("New array is: ");
    for ( i = 0; i < n; i++){
        printf("\t%d",a[i]);
    }
         
}