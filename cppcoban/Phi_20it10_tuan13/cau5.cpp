#include<stdio.h>
#include<conio.h>
#include<stdlib.h > 
#include <math.h>
void sngto(int n){
	int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("%d la so nguyen to trong file", n);
    }
	
}
main(){
	int n;
	FILE*fp;
	fp=fopen("bt5C.txt","r+");
	if(fp==NULL){
		printf("loi chua ket noi file");
		exit(1);
	}
	while(fscanf(fp,"%d",&n)!=EOF){
		sngto(n);
		printf("\n");
	}
	fclose(fp);
	getch(); 

}
