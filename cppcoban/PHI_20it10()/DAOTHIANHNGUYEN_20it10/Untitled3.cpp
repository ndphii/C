#include<stdio.h>
void diemsohoanthien(int n){
	printf("cac so hoan thien nho hon %d:",n);
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
			}
		}
		if(sum==i){
			printf("%d ",i);
		}
	}
}
main()
{
	int n;
	do {
 		printf("Nhap n: ");
 		scanf("%d",&n);
 		} while(n<=0);
	diemsohoanthien(n);

}
