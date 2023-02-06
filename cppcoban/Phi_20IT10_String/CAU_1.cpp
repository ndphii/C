#include<stdio.h>
#include<string.h>
void nhapchuoi(char ST[]){
	do{
	printf("moi ban nhap chuoi co do dai [0-50]:");
	gets(ST);
	}while((strlen(ST)==0 || strlen(ST)>50));
}
int kiemtraso(char ST[]){
	int check=0;
	for(int i=0;i<=strlen(ST);i++){
		if(ST[i]>='0'&& ST[i]<='9'){
			check=1;
			break;
		}
	}
	return check;
	
}
int kiemtrachuinhoa(char ST[]){
	int check=0;
	for(int i=0;i<=strlen(ST);i++){
		if(ST[i]>='A'&& ST[i]<='Z'){
			check=1;
			break;
		}
	}
	return check;
}
void kiemtraAisB(char ST[]){
	char cc;
	printf("\nmoi ban nhap mot ky tu bat ky:");
	scanf("%c",&cc);
	char check=0;
	for(int i=0;i<=strlen(ST);i++){
		if(ST[i]==cc){
			printf("ky tu [%c] co trong chuoi [%s]\n",cc,ST);
			check=1;
			break;
		}
	}
	if(check==0)
		printf("ky tu [%c] khong co trong chuoi [%s]\n",cc,ST);
}
void sosanhchuoi(char ST[]){
	char c[50];
	printf("moi ban nhap mot chuoi ky tu bat ky:");
	gets(c);
	int check=0;
		if(strlen(ST)<strlen(c)){
			printf("chuoi [%s] ngan hon chuoi [%s]",ST,c);
		}
		else if(strlen(ST)==strlen(c)){
			printf("chuoi [%s] bang chuoi [%s]",ST,c);
		}
		else  {
			printf("chuoi [%s] dai hon chuoi [%s]",ST,c);
		}
	
	
	printf("\n");
	int test=0;
	for(int i=0;i<=strlen(ST);i++){
		if(strstr(ST,c)!=NULL){
			test=1;
			break;
		}
	}
	if(test==1)
		printf("Va chuoi [%s] co chua chuoi [%s]",ST,c);
	else 
		printf("Va chuoi [%s] khong chua chuoi [%s]",ST,c);
}
main(){
	char ST[50];
	nhapchuoi(ST);
	if(kiemtraso(ST)==1)
		printf("\ntrong chuoi co so\n");
	else if(kiemtraso(ST)!=1)
			printf("\ntrong chuoi khong co so\n");
	
	if(kiemtrachuinhoa(ST)==1)
		printf("\ntrong chuoi co chua ky tu in hoa\n\n");
	else if(kiemtrachuinhoa(ST)!=1)
		printf("\ntrong chuoi khong co chua ky tu in hoa\n");
	sosanhchuoi(ST);
	kiemtraAisB(ST);
	

}
