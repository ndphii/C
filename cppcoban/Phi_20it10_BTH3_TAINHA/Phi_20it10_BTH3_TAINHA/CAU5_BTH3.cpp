#include <stdio.h>

int sum1for(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	return sum;
}
float sum2for(int n){
	float sum=0;
	for(int i=1;i<=n;i++){
		sum+=1/(float)i;
	}
	return sum;
}
int sum1while(int n){
	int sum=0,i=1;
	while(i<=n){
		sum+=i;
		i++;
	}
	return sum;
}

float sum2while(int n){
	float sum=0,i=1;
	while(i<=n){
		sum+=1/(float) i;
		i++;
	}
	return sum;
}
int sum1dowhile(int n){
	int sum=0,i=1;
	do{
		sum+=i;
		i++;
	}while(i<=n);
	return sum;
}

float sum2dowhile(int n){
	float sum=0,i=1;
	do{
		sum+=1/(float)i;
		i++;
	}while(i<=n);
	return sum;
}
main()
{	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	printf("\nVONG LAP FOR");
	printf("\nS(n):%d",sum1for(n));
	printf("\nS(1/n):%f",sum2for(n));
	
	printf("\n\nVONG LAP WHILE");
	printf("\nS(n):%d",sum1while(n));
	printf("\nS(1/n):%f",sum2while(n));
	
	printf("\n\nVONG LAP DO WHILE");
	printf("\nS(n):%d",sum1dowhile(n));
	printf("\nS(1/n):%f",sum2dowhile(n));
	
}
