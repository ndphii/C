#include <stdio.h>
main()
{	int n;
	printf("nhap n de tim so fibonaci cho vong lap while:");
	scanf("%d",&n);
	int f0=0;
	int f1=1;
	int fn;
	int i=3;
	printf("fibonai of WHILE");
	while(i<=n){
		fn=f1+f0;
		f0=f1;
		f1=fn;
		i++;
		}
	if(n==1||n==2){
		printf("\nso fibonai thu %d la 1",n);
	}
	else{
		printf("\nso fibonai thu %d la %d",n,fn);
	}
	
	int m;
	printf("\n\nnhap m de tim so fibonaci cho vong lap do while:");
	scanf("%d",&m);
	
	int F0=0;
	int F1=1;
	int Fm;
	int j=3;
	printf("fibonai of DO WHILE");
	do{
		Fm=F1+F0;
		F0=F1;
		F1=Fm;
		j++;
	}while(j<=m);
	if(m==1||m==2){
		printf("\nso fibonai thu %d la 1",m);
	}
	else{
		printf("\nso fibonai thu %d la %d",m,Fm);
	}
}
