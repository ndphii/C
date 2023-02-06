#include <stdio.h>
void nhapmang(int *arr,int n){
	for(int i=0;i<n;i++){
		printf("num %d:",i+1);
		scanf("%d",&*(arr+i));
	}
}
int summang(int *arr,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=*(arr+i);
	}
	return sum;
}
void xapsep(int *arr ,int n)
{
	int tmp;
for(int i=0;i<n;i++)
 for(int j=i+1;j<n;j++)
 if (*(arr+j)<*(arr+i))
 { tmp=*(arr+j);
 *(arr+j)=*(arr+i);
 *(arr+i)=tmp;
 }
}
void xuatmang(int *arr,int n){
	printf("\nmang cac so chan da duoc xap sep\n");
	for(int i=0;i<n;i++){
		if(*(arr+i)%2==0){
			printf("%d ",*(arr+i));
		}
	}
}

main(){
	int n;
	int arr[n];
	printf("nhap do dai mang:");
	scanf("%d",&n);
	nhapmang(arr,n);
	printf("tong cac phan tu trong mang=%d",summang(arr,n));
	xapsep(arr,n);
	xuatmang(arr,n);
}
