#include <stdio.h>
#include <stdlib.h>
int main(void){
	FILE* fptr;
	fptr = fopen("SortingTime.txt","w");
	int i;
	if(fptr==NULL){
		printf("ERROR");
		exit(1);
	}
	for(i=0;i<1000;i++){
		int val = rand() % 1000;
		fprintf(fptr,"%d ",val);
	}
	fclose(fptr);
	printf("number generated successfully !!");
	return 0;
	
}
