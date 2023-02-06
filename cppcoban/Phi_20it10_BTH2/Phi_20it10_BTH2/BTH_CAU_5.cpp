#include <stdio.h>
#include <math.h>
main(){
	float a,b,x;
	printf("moi ban nhap a:");
	scanf("%f",&a);
	printf("moi ban nhap b:");
	scanf("%f",&b);
	
	if(a==0){
		if(b==0){
			printf("phuong trinh vo so nghiem.");
		}
		else{
			printf("phuong trinh vo nghiem.");
		}
	}
	else{
		x=-b/a;
		printf(" phuong trinh co mot nghiem x=%f",x);
	}
}
