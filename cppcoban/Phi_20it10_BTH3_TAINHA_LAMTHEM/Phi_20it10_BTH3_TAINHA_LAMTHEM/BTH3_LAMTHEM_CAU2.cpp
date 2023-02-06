#include <stdio.h>
main()
{	long int n;
	printf("nhap n:");
	scanf("%d",&n);
	long int giaithua=1;
	
	for(long int i=1;i<=n;i++){
		giaithua*=i;
	}
	printf("%ld",giaithua);
}
