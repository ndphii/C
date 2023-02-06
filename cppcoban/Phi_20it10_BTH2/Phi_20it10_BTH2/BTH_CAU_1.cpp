#include <stdio.h>
main()
{	int a;
	printf("moi ban nhap mot so nguyen:");
	scanf("%d",&a);
	
	if (a==0)
		printf("so ban vua nhap la so khong");
	else
		printf("so ban vua nhap khong phai la so khong");
}
