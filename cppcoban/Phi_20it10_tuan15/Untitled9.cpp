#include <stdio.h>
main(){
	int n,uocmax=0,i;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			if(i%2!=0){
				uocmax=i;
			}
		}

	}
	printf("%d",uocmax);

}
