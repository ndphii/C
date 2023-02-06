#include <stdio.h>
main(){
    signed int n;
    scanf("%d",&n);
    int count=0;
	for(int i=1;i<=n;i++){
		if(i*i==n){
			printf("YES");
			break;
		}
		else 
			count+=1;
	}
	if(count==n)
	printf("YES");
	
	
	
    
}
