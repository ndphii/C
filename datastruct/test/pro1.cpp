#include <stdio.h>
float dttg(float b,float h){
	return 1/(float) 2*b*h;
}

main()
{	float b,h;
	printf("nhap lan luot day và chieu cao:");
 	scanf("%f %f",&b,&h);
 	printf("dien tich tam giac la:%f",dttg(b,h));
}
