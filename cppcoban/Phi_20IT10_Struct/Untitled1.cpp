#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct sinhvien {
	char sbd[10],hoten[30];
	int namsinh;
	float dt,dl,dh;
};
typedef sinhvien SV;

void nhap(SV *sv){
	printf("\nnhap so bao danh:");
	fflush(stdin);
	gets(sv->sbd);
	printf("\nnhap ho ten:");
	fflush(stdin);
	gets(sv->hoten);
	printf("\nNhap nam sinh: ");
	scanf("%d", &sv->namsinh);
	printf("\nDiem toan: ");
	scanf("%f", &sv->dt);
	printf("\nDiem hoa: ");
	scanf("%f", &sv->dh);
	printf("\nDiem ly: ");
	scanf("%f", &sv->dl);
}
void nhapn(SV arr[],int n){
	for(int i=0; i<n; i++) {
		printf("\nNhap sinh vien thu %d: ", i+1);
		nhap(&arr[i]);
	}
}
float Tongdiem(SV sv) {
	return sv.dt + sv.dl + sv.dh;
}

bool Trungtuyen(SV sv,float Diemchuan) {
	bool Trungtuyen = false;
	if(Tongdiem(sv)>=Diemchuan && sv.dt>0 && sv.dh>0 && sv.dl>0)
		Trungtuyen = true;
	return Trungtuyen;
}
void xuat(SV sv) {
	printf("\nSBD sinh vien: %s", sv.sbd);
	printf("\nHo va ten: %s", sv.hoten);
	printf("\nTuoi: %d",2020-sv.namsinh);
	printf("\nDiem toan - hoa - ly: %.2f - %.2f - %.2f", sv.dt, sv.dh, sv.dl);
	printf("\nTong diem cua sinh vien: %.2f", Tongdiem(sv));
}
void XuatN(SV a[], int n) {

	for(int i=0; i<n; i++) {
		printf("\nThong tin sinh vien thu %d: ", i+1);
		xuat(a[i]);
	}

}
void DStrungtuyen(SV a[], int n) {
	float Diemchuan;
	printf("\nNhap diem chuan: ");
	scanf("%f", &Diemchuan);
	printf("\nDanh sach sinh vien trung tuyen: ");

	for(int i=0; i<n; i++) {
		if(Trungtuyen(a[i], Diemchuan))
			xuat(a[i]);
	}

}


 main() {
	struct sinhvien SV[100];
	int i,n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
    nhapn(SV,n);
    DStrungtuyen(SV,n);
   
}
