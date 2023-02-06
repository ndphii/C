#include <stdio.h>
#include <math.h>
long toBi(int n){
	long bno=0,rem,f=1;
	while(n!=0){
		rem=n%2;
		bno+=rem*f;
		f*=10;
		n/=2;
	}
	return bno;
}
main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	printf("%d",toBi(n));
}

