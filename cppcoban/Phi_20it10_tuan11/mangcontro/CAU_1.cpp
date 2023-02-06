#include <stdio.h>
void nhap(int *arr, int *n) {
	for(int i = 0; i < *n; i++) {
		printf("phan tu[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
void hienThi(int *arr, int n) {
	printf("Chuoi vua nhap:");
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
 
int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}

main(){
	int n,arr[n];
	printf("nhap n:");
	scanf("%d",&n);
	nhap(arr,&n);
	hienThi(arr,n);
	printf("Min:%d",min(arr,n));
	printf("\nMax:%d",max(arr,n));
}
