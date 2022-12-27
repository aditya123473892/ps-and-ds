#include<stdio.h>
void main()
{
    int s, a[50], i, j, t, p, c=0, ind;
    printf("Enter no of elements of array: ");
    scanf("%d", &s);
    printf("Enter array elements:");
    for(i=0; i<s; i++)
        scanf("%d", &a[i]);
    for(i=0; i<(s-1); i++){
        p = a[i];
        for(j=(i+1); j<s; j++){
            if(p>a[j]){
                p = a[j];
                c++;
                ind = j;
            }
        }
        if(c!=0){
            t = a[i];
            a[i] = p;
            a[ind] = t;
        }
        c=0;
    }
    printf("Now the array after sorting is:\n");
    for(i=0; i<s; i++)
        printf("%d ", a[i]);
}