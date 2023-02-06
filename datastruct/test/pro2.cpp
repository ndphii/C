#include <stdio.h>
float tong(float a,float b){
	return a+b;
}

main()
{	
	float aa,bb;
	float *a=&aa,*b=&bb;
	scanf("%f %f",&aa,&bb);
	printf("%f + %f = %f",aa,bb,tong(*a,*b));
	
}
