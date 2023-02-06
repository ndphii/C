#include <stdio.h>
int luythua(int x,int n){
	int luythua=1;
		for(int i=1;i<=n;i++){
			luythua*=x;
		}
		return luythua;
}
main(){
	int x,n;
	scanf("%d %d",&x,&n);
	printf("%d",luythua(x,n));
}
