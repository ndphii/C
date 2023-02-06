#include <stdio.h>
main(){
		int a,b;
	do{
	printf("nhap a va b lan luot:");
	scanf("%d %d",&a,&b);
	printf("NO\n");
	}while((a<0||a>=1000)||(b<0||b>=1000));
	printf("tich=%d",a*b);
}
