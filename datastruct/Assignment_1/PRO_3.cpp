#include <stdio.h>

int minarr(int *arr){
	for(int i=1;i<=3;i++){
		printf("Num %d=",i);scanf("%d,",&*(arr+i));
	}
	int min=*(arr+1);
	for(int i=1;i<=3;i++){
		if(*(arr+i)<min)
		min=*(arr+i);
	}
	return min;
}

main(){
	int arr[3];
	printf("%d",minarr(arr));
}
