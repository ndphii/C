#include <stdio.h>
#include <string.h>
struct sinhvien{
	char hoten[50];
	char lop[10];
	char gioitinh[10];
	float dt,da;
};
typedef sinhvien SV;

void nhapthongtin(SV*arr){
	
	printf("nhap ten:");
	fflush(stdin);
	gets(arr->hoten);
	printf("\nnhap lop:");
	gets(arr->lop);
	fflush(stdin);
	printf("\nnhap gioi tinh:");
	gets(arr->gioitinh);
	fflush(stdin);
	printf("\nnhap diem toan:");
	scanf("%f", &arr->dt);
	printf("\nnhap diem anh:");
	scanf("%f", &arr->da);
	
}
void soluongsv(int n,SV arr[]){
	for(int i=0;i<n;i++){
		printf("\nnhap thong tin cho sinh vien thu %d:\n",i+1);
		nhapthongtin(&arr[i]);
	}
}

float avg(SV sv) {
	return (float)(sv.da+sv.dt)/2;
}
void Xuat(SV sv) {
	printf("\nHo ten thi sinh: %s", sv.hoten);
	printf("\nGioi tinh: %s", sv.gioitinh);
	printf("\nLop: %s",sv.lop);
	printf("\nDiem toan-ly-hoa: %.2f-%.2f",sv.dt,sv.da);
	printf("\nDiem trung binh: %.2f\n", avg(sv));
}
void XuatN(SV arr[], int n) {
	for(int i=0; i<n; i++) {
		printf("\nThong tin cua thi sinh thu %d:", i+1);
		Xuat(arr[i]);
	}
}
 main() {
	struct sinhvien SV[100];
	int i,n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
    soluongsv(n,SV);
    XuatN(SV,n);
   
}









/*#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h> 

struct Sinhvien {
	char gt[10];
	char ten[30];
	int lop;
	float diemToan, diemAnh;
}; 
typedef Sinhvien SV;
void Nhap (SV *sv);
void NhapN (SV a[], int n);
void Xuat (SV sv);
void XuatN (SV a[], int n);
float tongDiem (SV sv);
main() {
	struct Sinhvien SV[100];
	int i;
	int n;
	printf("nhap so luong sinh vien:");
	scanf("%d", &n);
	if ( n <10) {
		printf("%d",n); 
	}else {
		printf("xin loi qua so sinh vien"); 
		exit(0); 
			} 
	NhapN(SV,n);
	XuatN(SV,n);
//	DStrungtuyen(SV,n);
}
void Nhap (SV *sv) {
	fflush(stdin); 
		printf("\n nhap ho ten thi sinh:");
	gets(sv->ten);
	printf("\n nhap gioi tinh:");
	fflush(stdin);
	gets(sv->gt);
	printf("\n nhap lop:");
	scanf("%d", &sv->lop);
	printf("\n nhap diem Toan:");
	scanf("%f", &sv->diemToan);
	printf("\n nhap diem Anh:");
	scanf("%f", &sv->diemAnh);
}
void NhapN( SV a[], int n) {
	for (int i =0; i<n; i++) {
		printf("\n nhap sinh vien thu %d:", i+1);
		Nhap(&a[i]);
	}
}
void Xuat(SV sv) {
	printf("\n ho ten thi sinh: %s", sv.ten);
	printf("\n gioi tinh: %s", sv.gt);
	printf("\n lop: %d",sv.lop);
	printf("\n Diem toan-ly-hoa: %.2f-%.2f",sv.diemToan,sv.diemAnh);
	printf("\n tong diem cua sinh vien: %.2f", tongDiem(sv));
}
void XuatN(SV a[], int n) {
	for(int i =0; i<n; i++) {
		printf("\nthong tin cua thi sinh thu %d:", i+1);
		Xuat(a[i]);
	}
}

float tongDiem(SV sv) {
	return (sv.diemToan + sv.diemAnh)/2; 
}*/

