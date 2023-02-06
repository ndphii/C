#include <stdio.h>
#include <conio.h>
main(){
	int num,tg=0;
	FILE *fp;
	char c;
	fp=fopen("bt1C.txt","r");
	if(fp==NULL){
		
		perror("loi mo file");
		return -1;
		
	}
	while((c=fgetc(fp))!=EOF){
		printf("%c",c);
		if(c==32)
		printf("\n");
		
	}
	fclose(fp);
}
