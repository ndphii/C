#include <stdio.h>
#include <math.h>
main()
{	
	int n;
	printf("nhap n:");
	scanf("%d",&n);

		for(int j=1;j<=n;j++){
       		if(j>=1 && (sqrt(j)==(int)sqrt(j))){
       			printf("%d ",j);
    		}
   		}

}
