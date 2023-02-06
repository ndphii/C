#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int num,sum=0;
	FILE *fp;
	fp=fopen("bt3C.txt","r");
	if(fp==NULL){
		perror("loi mo file");
		return -1;
	}
	while (fscanf(fp,"%d",&num)!=EOF)
	{
	 sum+=num; 
		printf("Sum all number in file n=%d \n",num);
	}
	printf("Sum of n=%d \n",sum);
	fclose(fp);
	getch(); 
}
