#include <stdio.h>
#include <string.h>
void info(char ten[50],unsigned long luong,unsigned long thuong){
	unsigned long money=luong+thuong;
	printf("tong luong:%d",money);
		
}
main(){
	
	char ten[50];
	unsigned long luong,thuong;
	printf("nhap ten:");
	gets(ten);
	printf("nhap tien luong:");
	scanf("%d",&luong);
	printf("nhap tien thuong:");
	scanf("%d",&thuong);
	info(ten,luong,thuong);
	
}
