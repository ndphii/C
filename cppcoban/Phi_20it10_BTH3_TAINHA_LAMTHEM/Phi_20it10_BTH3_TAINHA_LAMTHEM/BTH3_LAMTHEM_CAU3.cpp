#include <stdio.h>
main()
{	int i,n,tich=0;
	printf("nhap n:");
	scanf("%d",&n);
	
	
	while (n>0){
	 i++;
		for(int j=1;j<=i;){
			tich+=(i%10)*(i%10)*(i%10);
			i/=10;
		
		}
		if(tich==i)
			printf("%d",i);
	}
}

