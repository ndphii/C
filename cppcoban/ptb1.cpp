#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{	float a,b,x;
	printf("nhap a,b:");
	scanf("%f %f",&a,&b);
	if (a==0){
		if (b==0){
			printf("phuong trinh co vo so nghiem");
		}else{
				printf("phuong trinh vo nghiem.");
			
		}
	}
	else{
		x=-b/a;
		printf("phuong trinh co mot nghiem x=%0.2f",x);
	}
	getch();
}
