#include <stdio.h>
#include <string.h> 
main(){
	char a[1000];
	int i,c=0; 
	gets(a);
	if(strlen(a)>100){
		printf("N") ;
		return 0; 
	}
	for(i=0;i<strlen(a);i++){
		if(a[i]==' ') 
			c++;
	} 
	if(c==0){
		printf("N") ;
	} 
	else{
		for(i=0;i<strlen(a);i++){
			if(a[i]==' '){
				 printf("\n");
			} 
			else{
				printf("%c",a[i]);
			} 
		}
	} 
} 
