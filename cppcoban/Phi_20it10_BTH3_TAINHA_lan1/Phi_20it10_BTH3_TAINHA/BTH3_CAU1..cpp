#include <stdio.h>
main()
{	int n;
	float sum=1;
	printf("nhap n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i==1||i%2==0){
			sum+=1/(float)(2*i);
		}
		
	}
	printf("%f",sum);
}
