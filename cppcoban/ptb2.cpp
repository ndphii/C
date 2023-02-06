#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	float a,b,c,d,x,x1,x2;
	printf("nhap a b c:");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if (a==0){
		if(b==0){
			printf("phuong trinh co vo so nghiem.");
		}else {
			printf("phuong trinh co 1 nghiem phan biet:x=%f",-c/b);
		}
		return 0;
	}
	
		 if (d==0){
				x=-b/2*a;
				printf("phuong trinh co nghiem kep x=%0.2f",x);
		}else if (d<0){
			printf("phuong trinh vo nghiem.");
		}else{
			x1=(-b+sqrt(d))/2*a;
			x2=(-b-sqrt(d))/2*a;
			printf("phuong trinh co 2 nghiem x1=%0.2f x2=%0.2f",x1,x2);
		}
	
		
}
