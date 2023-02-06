#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int num,sum=0;
	FILE *fp;
	fp=fopen("bt4C.txt","r");
	if(fp==NULL){
		perror("loi mo file");
		return -1;
	}
	while (fscanf(fp,"%d",&num)!=EOF)
	{
		if(num%2!=0){
	 		sum+=num;
	  	}
	 
		printf("sum all num mod 2 !=0 n=%d \n",num);
	}
	printf("Sum of n=%d \n",sum);
	fclose(fp);
	getch(); 
}
