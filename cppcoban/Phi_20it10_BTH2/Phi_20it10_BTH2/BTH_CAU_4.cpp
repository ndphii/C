#include <stdio.h>
#include <math.h>
main()
{	 float a,b,c,p,dttg;
	printf("moi ban nhap chieu dai canh thu 1:");
	scanf("%f",&a);
	printf("moi ban chieu dai canh thu 2:");
	scanf("%f",&b);
	printf("moi ban chieu dai canh thu 3:");
	scanf("%f",&c);
	
	if( a<b+c && b<a+c && c<a+b ){
		p=(a+b+c)/2;
		dttg=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("dien tich tam giac bang: %f\n",dttg);
		printf("chu vi tam giac bang: %f\n",p*2);
        if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
            printf("Day la tam giac vuong");
        else if(a==b && b==c)
            printf("Day la tam giac deu");
        else if(a==b || a==c || b==c)
            printf("Day la tam giac can");
        else
            printf("Day la tam giac nhon");
    }
	else
		printf("3 canh vua nhap khong phai la tam giac.");
		
}
