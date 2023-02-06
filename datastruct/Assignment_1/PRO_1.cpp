#include <stdio.h>
#include <math.h>
int DectoOct(int n){
	int i=0;
	int rs=0;
	while(n>0){
		rs+=(n%8)*pow(10,i);
		i++;
		n/=8;
	}
return rs;
}
main(){
	int n;
	printf("nhap so:");scanf("%d",&n);
	printf("\nDecimal value is:%d",n);
	printf("\nOctal value is:%d",DectoOct(n));//printf("\nOctal value is:%o",n);
	printf("\nHexadecimal value is:%X",n);
	// dinh dang %o=octal,%x=hexadecimal
}
