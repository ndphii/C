#include <stdio.h>
main(){
	float n;
	printf("nhap mot so thuc:");scanf("%f",&n);
	printf("fixed-point format (correct to two decimal places):-- %.2f\n",n);
	printf("fixed-point format (correct to five decimal places):-- %.4f\n",n);
}
