#include <stdio.h>
main()
{ int n,sum;
	printf("nhap n:");
	scanf("%d",&n);
	
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		printf("%d la so hoan hao.",n);
	}
	else{
		printf("%d khong la so hoan hao.",n);
	}
}
