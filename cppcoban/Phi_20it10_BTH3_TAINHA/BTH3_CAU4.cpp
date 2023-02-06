#include <stdio.h>
#include <math.h>
main()
{	
	int n;
	printf("nhap n:");
	scanf("%d",&n);

		for(int j=1;j<=n;j++){
			int count = 0;
   		 	for(int i = 2; i <= sqrt(j); i++){
       			if(j % i == 0){
            		count++;
        		}
   		 	}
   		 	if(count == 0){
   		 		printf("%d ",j);
   			}
   		}

}

