#include<stdio.h>
float sumfloat(int a,int b,int c,int d){
	return (a/(float)b)+(c/(float)d);
}
main(){
	int a,b,c,d;
	printf("nhap a b c d lan luot:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%d/%d + %d/%d= %f",a,b,c,d,sumfloat(a,b,c,d));
}
