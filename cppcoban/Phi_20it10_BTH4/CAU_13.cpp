#include <stdio.h>
void pernum(int n){
	int sum=0;
		for(int i=1;i<n;i++){
			if(n%i==0)
				sum+=i;
		}
		if(sum==n)
			printf("%d la so hoan hao",n);
		else 
			printf("%d khong phai so hoan hao",n);
		
}
main(){
	int n,m;
//	printf("nhap n:");
	scanf("%d %d",&n,&m);
	pernum(n);
	
}
