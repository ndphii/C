#include <stdio.h>
#include<stdlib.h>
main(){
	int a[1000];
	srand((int)time(0));
 	for(int i = 0; i < 1000; i++){
 		a[i] = rand();
	}

	for(int i = 0; i < 1000; ++i){
 		printf("%d ",a[i]);
	}
}

