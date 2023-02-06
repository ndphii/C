#include <stdio.h>
main(){
	int n,sum;
	printf("nhap mot so de kiem tra:");
	scanf("%d",&n);
	
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	printf("tong cac uoc cua %d la:%d",n,sum);
}
