#include <stdio.h>
main()
{  float a,b,c,d,max;
	printf("moi ban nhap so thu nhat:");
	scanf("%f",&a);
	printf("moi ban nhap so thu hai:");
	scanf("%f",&b);
	printf("moi ban nhap so thu ba:");
	scanf("%f",&c);
	printf("moi ban nhap so thu tu:");
	scanf("%f",&d);
	max=a;
	if(max<b){
		max=b;
		printf("so lon nhat la %f",max);
	}
	else if(max<c){
		max=c;
		printf("so lon nhat la %f",max);
	}
	else if(max<d){
		max=d;
		printf("so lon nhat la %f",max);
	}
	else
		printf("so lon nhat la %f",a);

}
