#include <stdio.h>
#include <math.h>
void demsochinhphuong(int n){
	printf("cac so chinh phuong nho hon %d:",n);
	for(int i=1;i<=n;i++){
		if(i>=1 && (sqrt(i)==(int)sqrt(i))){
			printf("%d ",i);
		}
	}
}
main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	demsochinhphuong(n);
}
