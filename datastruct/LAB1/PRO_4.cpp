#include <stdio.h>
void nhapmang(int *arr,int n){
	for(int i=0;i<n;i++){
		printf("arr[%d]:",i);
		scanf("%d",&*(arr+i));
	}
}
void xuatmang(int *arr,int n){
	printf("\n");
		for(int i=0;i<n;i++){
		printf("%d ",*(arr+i));
	}
}
main(){
	int n,arr[n];
	printf("nhap do dai mang:");
	scanf("%d",&n);
	nhapmang(arr,n);
	xuatmang(arr,n);
}
