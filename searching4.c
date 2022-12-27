#include <math.h>
#include <stdio.h>
int jumsearch(int a[100], int size, int key);
void main()
{
    int a[100],size,key,i,z;
    printf("Enter no of elements of Array: ");
    scanf("%d",&size);
    printf("Enter elements of Array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element of to be searched: ");
    scanf("%d",&key);
    z= jumsearch(a,size,key);
}
int jumsearch(int a[], int size, int key){
    int start=0,end=sqrt(size),i;
    
    while (a[end] <= key && end < size)
    {
        start = end;
        end += sqrt(size);
        if(end >  size-1){
            end = size;
        }
    }
    for (i = start; i < end; i++)
    {
        if (key == a[i])
        {
            return i;
        }
    } 
}