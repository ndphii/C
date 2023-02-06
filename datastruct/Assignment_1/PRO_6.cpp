#include <stdio.h>
main(){
	int n;
	printf(" Enter the number: ");
	scanf("%d",&n);
	switch (n){
		case 1:
			printf("I");
			break;
		case 4:
			printf("IV");
			break;
		case 5:
			printf("V");
			break;
		case 9:
			printf("IX");
			
			break;
		case 10:
			printf("X");
			
			break;
		case 40:
			printf("XL");
			
			break;
		case 50:
			printf("L");
			
			break;
		case 90:
			
			printf("XC");
			break;
		case 100:
			
			printf("C");
			break;
		case 400:
			
			printf("CD");
			break;
		case 500:
			
			printf("D");
			break;
		case 900:
			printf("CM");
			
			break;
		case 1000:
			
			printf("M");
			break;
		
	}
}
