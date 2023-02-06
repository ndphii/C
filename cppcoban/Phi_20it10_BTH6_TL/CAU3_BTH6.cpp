#include <stdio.h>
main()
{
	int i,n,sum=0;
	printf("nhap n:");
	scanf("%d",&n);
	
	if(n<0){
		printf("nhap n:");
		scanf("%d",&n);
	}
	else{
		i=1;
		while (i<=n){
			sum+=i*i;
			i++;
		}
		printf("sum:%d",sum);
	}
}
