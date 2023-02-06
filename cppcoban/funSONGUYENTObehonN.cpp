#include <stdio.h>
#include <math.h>
void nguyentonhohonN(int n){
	printf("cac so nguyen to nho hon %d:",n);
	for(int i=2;i<=n;i++){
		int count=0;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				count++;
			}
		}
			if(count==0){
				printf("%d ",i);
			}
	}
}
main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	nguyentonhohonN(n);
}
