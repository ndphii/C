#include<stdio.h>
main()
{	int n;
	printf("nhap n de tinh cho vong lap FOR:");
	scanf("%d",&n);
	int sumFor =0;
	for(int i=1;i<=n;i++){
		sumFor+=i*i;
	}
	printf("sum of for:%d",sumFor);
	
	int m;
	printf("\n\nnhap m de tinh cho vong lap WHILE:");
	scanf("%d",&m);
	
	int i=1;
	int sumWhile=0;
	while(i<=m){
		sumWhile+=i*i;
		i++;
	}
	printf("sum of while:%d",sumWhile);
	
	
	int k;
	printf("\n\nnhap k de tinh cho vong lap DO WHILE:");
	scanf("%d",&k);
	int j=1;
	int sumDoWhile=0;
	do{
		sumDoWhile+=j*j;
		j++;
	}while(j<=k);
		printf("sum of while:%d",sumDoWhile);
	
}
