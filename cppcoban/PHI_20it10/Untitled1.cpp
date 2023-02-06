#include<stdio.h>
#include <math.h>
void songuyento(int n){
	printf("cac so nguyen to nho hon %d:",n);
	for(int j=1;j<=n;j++){
			int count = 0;
   		 	for(int i = 2; i <= sqrt(j); i++){
       			if(j % i == 0){
            		count++;
        		}
   		 	}
   		 	if(count == 0&&j!=1){
   		 		printf("%d ",j);
   			}
   		}
}
main()
{	
	int nn,n;
	printf("nhap n:");
	scanf("%d",&n);
	do {
 		printf("Nhap n: ");
 		scanf("%d",&n);
 		} while(n<=0);
		songuyento(n);
}
