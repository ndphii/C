#include <stdio.h>
main()
{
	int n;
	printf("nhap n de tinh bang cuu chuong cho vong lap FOR:");
	scanf("%d",&n);
	printf("bang cuu chuong %d bang vong lap FOR",n);
	for(int i=1;i<=10;i++){
		printf("\n%d x %d = %d",n,i,n*i);
	}
	int m;
	printf("\n\nnhap m de tinh bang cuu chuong cho vong lap WHILE :");
	scanf("%d",&m);
	printf("\nbang cuu chuong %d bang vong lap WHILE",m);
	int i=1;
	while(i<=10){
		printf("\n%d x %d = %d",m,i,m*i);
		i++;
	}
	
	int k;
	printf("\n\nnhap k de tinh bang cuu chuong cho vong lap DO WHILE :");
	scanf("%d",&k);
	printf("\nbang cuu chuong %d bang vong lap DO WHILE",n);
	int j=1;
	do{
		printf("\n%d x %d = %d",k,j,k*j);
		j++;
	}while(j<=10);
}
