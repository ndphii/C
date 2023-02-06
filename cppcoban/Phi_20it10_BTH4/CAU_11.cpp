#include <stdio.h>
#include <string.h>
int tong(int a,int b){
	return a+b;
}
int hieu(int a,int b){
	return a-b;
}
int tich(int a,int b){
	return a*b;
}
float thuong(int a,int b){
	return (float)a/b;
}


main(){
	int a,b,i;
	char action[10],ts[10]="+",hs[10]="-",t[10]="*",th[10]="/";;
	printf("(+)-tinh tong \n(-)-tinh hieu \n(*)-tinh tich \n(/)-tinh thuong");
	printf("\nban muon thuc hien thao tac gi?");
	gets(action);
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	if(strcmp(action,ts)==0){
		printf("tong:%d",tong(a,b));
	}
	else if(strcmp(action,hs)==0){
		printf("hieu:%d",hieu(a,b));
	}
	else if(strcmp(action,t)==0){
		printf("tich:%d",tich(a,b));
	} 
	else if(strcmp(action,th)==0){
		printf("thuong:%f",thuong(a,b));
	}
}
