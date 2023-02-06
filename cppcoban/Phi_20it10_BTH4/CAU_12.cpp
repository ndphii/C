#include <stdio.h>
unsigned long TongS(unsigned int n){
	unsigned long sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	return sum;
}
main(){
	unsigned int n;
	printf("nhap n:");
	scanf("%d",&n);
	printf("tong:%d",TongS(n));
}
