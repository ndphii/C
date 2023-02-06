#include<stdio.h>
#include<stdlib.h>
void Nhap(int *A,int n);
void Xuat(int *A,int n);
void Them(int *A,int *n,int x);
void XoaLe(int *A,int *n);
main(){
	//int t[10];
	int *B[10];
/*	B=t;
	B=(int *) realloc(B,7*sizeof(int));
*/
	int n=5;
	Nhap(&B,n);
	printf("\nMang B ban dau:");
	Xuat(&B,n);
	Them(&B,&n,5);
	printf("\nMang B sau khi them x=5:");
	Xuat(&B,n);
	XoaLe(&B,&n);
	printf("\nMang B sau khi xoa cac so le:");
	Xuat(&B,n);
	realloc(B,0);
	
}
void XoaLe(int *A,int *n){
	int i;
	for(i=0;i<*n;i++)
		if(*(A+i)%2==1)
		{
			int j;
			for(j=i;j<*n-1;j++){
				*(A+j)=*(A+j+1);
			}
			*n=*n-1;
			i=i-1;
		}
	
}
void Them(int *A,int *n,int x){
	*n=*n+1;
	*(A+(*n-1))=x;
}
void Nhap(int *A,int n){
	int i;
	srand(time());
	for(i=0;i<n;i++){
		*(A+i)=rand()%10;
	}
}

void Xuat(int *A,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",*(A+i));
	}
}


