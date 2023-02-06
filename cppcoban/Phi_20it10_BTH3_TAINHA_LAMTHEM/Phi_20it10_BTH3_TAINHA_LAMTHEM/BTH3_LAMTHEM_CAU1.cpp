#include <stdio.h>
main()
{	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<=n;){
		sum+=n%10;
		n/=10;
	}
	printf("%d",sum);
}
