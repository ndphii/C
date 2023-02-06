#include <stdio.h>
int binhphuong(int n){
	printf("%d binh phuong =",n);
	return n*n;
}
main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	printf("%d",binhphuong(n));
}
