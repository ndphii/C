#include <stdio.h>
float dttg(float b,float h){
	return 1/(float) 2*b*h;
}

main()
{	
	float da,cc;
	float *b=&da,*h=&cc;
	printf("nhap lan luot day và chieu cao:");
 	scanf("%f %f",&da,&cc);
 	printf("dien tich tam giac la:%f",dttg(*b,*h));
}
