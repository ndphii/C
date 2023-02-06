#include <stdio.h>
main()
{ 	int n;
	printf("moi ban nhap mot so nguyen lon hon 1 va nho hon 4:");
	scanf("%d",&n);
	switch(n){
		case(1):printf("mua xuan");break;
		case(2):printf("mua ha");break;
		case(3):printf("mua thu");break;
		case(4):printf("mua dong");break;
		default:printf("ket thuc.");
	}
}
