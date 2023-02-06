#include <stdio.h>
void uocnhohonN(int n){
	printf("cac uoc nho hon %d:",n);
	for(int i=2;i<=n;i++){
			if(n%i==0){
				printf("%d ",i);
			}
	}
}
main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	uocnhohonN(n);
}
