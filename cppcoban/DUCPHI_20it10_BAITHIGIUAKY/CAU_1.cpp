#include <stdio.h>
#include<math.h>
main(){
	float r,dtmc,ttkc;
	printf("nhap ban kinh r(r>0):");
	scanf("%f",&r);
	dtmc=4*M_PI*r*r;
	ttkc=(float)4/3*M_PI*r*r*r;
	printf("dien tich mat cau:%f",dtmc);
	printf("\nthe tich khoi cau:%f",ttkc);
	
	
}
