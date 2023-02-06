#include <stdio.h>
main()
{
	int n;
	printf("nhap n de tinh giai thua cho vong lap WHILE:");
	scanf("%d",&n);
	printf("giai thua cua %d tinh bang vong lap WHILE:",n);
	int i=1,giaithua=1;
	while(i<=n){
		giaithua*=i;
		i++;
	}	printf("%d",giaithua);
	
	int m;
		printf("\n\nnhap m de tinh giai thua cho vong lap DO WHILE:");
	scanf("%d",&m);
	printf("giai thua cua %d tinh bang vong lap DO WHILE:",m);
	int j=1,giaithuaa=1;
	do{
		giaithuaa*=j;
		j++;
	}while(j<=m);	
	printf("%d",giaithuaa);
	
}
