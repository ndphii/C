#include<stdio.h>
#include<conio.h>
#include<stdlib.h > 
main(){
	int num,sum=0;
	FILE*fp;
	fp=fopen("bt2C.txt","r+");
	if(fp==NULL){
		printf("loi chua ket noi file");
		exit(1);
	}
	while(fscanf(fp,"%d",&num)!=EOF){
		if(num%2==0)
		printf("value of n=%d\n",num);
	}
	printf("sum of n=%d\n",num);
	fclose(fp);
	getch(); 

}
