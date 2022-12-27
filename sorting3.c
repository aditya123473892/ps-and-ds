#include <math.h>
#include <stdio.h>
void insertionSort(int arr[], int p){
	int i, key, j;
	for (i = 1; i < p; i++){
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void main(){
	int a[100],i,n;
    printf("Enter no of elements of array:");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
	int p = (sizeof(a)/sizeof(a[0]));
	insertionSort(a, n);
    printf("Sorted array:\n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
}