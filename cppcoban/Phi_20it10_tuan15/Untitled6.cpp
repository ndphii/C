#include <stdio.h>
main(){
	int n,count=0,sum=0; 
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			sum+=i;
			count++; 
		} 
	} 
	printf("%d %d",count,sum) ;
} 
