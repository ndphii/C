#include<stdio.h>
#include<string.h>

struct sinhvien{
char name[30];
char cl[10];
float mMath;
float mPhysical; 
float mChe;
};
//typedef sinhvien sv;

void nhapsv(sinhvien *arr,int n){
	for(int i=1;i<=n;i++){
		printf("\nNhap thong tin sinh vien thu %d:\n",i);
	
		printf("ho va ten:");
		fflush(stdin);
		gets(arr->name);
	
		printf("lop:");
		gets(arr->cl);
		
		printf("diem toan:");
		scanf("%2f",&arr->mMath);
		
		printf("diem ly:");
		scanf("%2f",&arr->mPhysical);
		
		printf("diem hoa:");
		scanf("%2f",&arr->mChe);
	}
	}
void xuat(sinhvien *arr){
	printf("\nho ten:%s",arr->name);
	printf("\nlop:%s",arr->cl);
	printf("\ndiem toan:%0.2f",arr->mMath);
	printf("\ndiem ly:%0.2f",arr->mPhysical);
	printf("\ndiem hoa:%0.2f",arr->mChe);
}
void findname(sinhvien *arr,int n,char fname[]){
	for(int i=1;i<=n;i++){
		if(strcmp(fname,arr->name)==0){
			xuat(arr);
			break;
		}
	}
}
void suathongtin(sinhvien *arr,int n,char fname[]){
	for(int i=1;i<=n;i++){
		if(strcmp(fname,arr->name)==0){
			printf("sua lai lop cua %s tai day:",arr->name);
			fflush(stdin);
			gets(arr->cl);
			printf("sua thanh cong.");
			break;
		}
	}
}

main(){
	sinhvien arr[100];
	int n;
	char fname[50];
	char continuee[]="y";
	while(strcmp(continuee,"y")==0){
	int chon;
	printf("MOI BAN CHON CAC CHUC NANG\n1: them sinh vien\n2:tim sinh vien bang ten\n3:sua lop cua sinh vien bang cach nhap ten\n");
	scanf("%d",&chon);
	switch (chon){
		case 1:
				printf("nhap so luong sinh vien can them:");
				scanf("%d",&n);
				nhapsv(arr,n);
				break;
		case 2:
				printf("nhap ten sinh vien can tim:");
				fflush(stdin);
				gets(fname);
				findname(arr,n,fname);
				break;
		case 3: 
				printf("nhap ten sinh vien can sua:");
				fflush(stdin);
				gets(fname);
				suathongtin(arr,n,fname);
				break;
		default:
				printf("nhap lai:");
				scanf("%d",&chon);
				
	}
		printf("\nBan muon dung chuc nang nao nua khong?(y/n)");
		fflush(stdin);
		gets(continuee);
	}
	



	
}
