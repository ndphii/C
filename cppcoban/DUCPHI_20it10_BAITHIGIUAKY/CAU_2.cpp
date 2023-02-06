#include <stdio.h>
main(){
	int n;
	printf("nhap mot so de kiem tra:");
	scanf("%d",&n);
	if (n>0)
		printf("do la so duong");
	else if (n<0)
		printf("do la so am");
	else if (n==0)
		printf("do la so 0");
	
}
