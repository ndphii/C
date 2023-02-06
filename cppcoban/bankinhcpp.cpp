#include <stdio.h>
#include <math.h>
/*#include <conio.h>*/
 main()
{  float r,s,v;
	printf("nhap ban kinh:");
	scanf("%f",&r);
	s=M_PI*r*r;
	v=4*M_PI*r*r/3;
	printf("dien tich hinh cau co ban kinh: %0.3f\n",s);
	printf("the tich hinh cau co ban kinh: %0.3f",v);
}

