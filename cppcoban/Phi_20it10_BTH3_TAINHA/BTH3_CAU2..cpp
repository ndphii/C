#include <stdio.h>
main()
{	int n;
	printf("nhap n:");
	scanf("%d",&n);
		printf("tat ca uoc cua so %d:",n);
		for(int i=1;i<=n;i++){
			if(n%i==0)
			printf(" %d ",i);
		}
}
