#include <stdio.h>
main(){
	int *t;
	int a=12,b=5;
	t=&a;	
	printf("a=12,b=5");
	printf("tong=%d",*t+b);
	printf("\nhieu=%d",*t-b);
	printf("\ntich=%d",*t*b);
	printf("\nthuong=%f",*t/(float)b);
}
