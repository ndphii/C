#include<stdio.h>
#include<math.h>
void nhapmang(float *a,int n){
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%f",&*(a+i));
	}
}
float sum(float *a,int n,int x){
	float sum=0;
	for(int i=0;i<n;i++){
		sum+=*(a+i)*pow(x,n);
	}
	return sum;
}
main(){
	int n,x;
	float a[n];
	printf("nhap do dai mang:");scanf("%d",&n);
	nhapmang(a,n);
	printf("nhap x:");scanf("%d",&x);
	
	printf("\nP(x)=%f",sum(a,n,x));
	printf("\t\tai*x^n (0<=i<n) ");
	printf("\nDo phuc tap thuat toan la O(n)");
}
