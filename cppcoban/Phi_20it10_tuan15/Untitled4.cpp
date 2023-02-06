#include <stdio.h>


main(){
	int a[100],n;
	
	scanf("%d",&n);
	int i=0,c=0;
	while(n!=0){
		a[i++]=n%10;
		n/=10;
		c++;
	}
	int max=a[0];
	for(int j=0;j<c;j++){
		if(a[i]>max){
			max=a[i];
		}
	}
	int count=0;
	for(int j=0;j<c;j++){
		if(a[i]=max){
		count++;
		}
	}
	printf("%d %d",max,count);
	
}

