#include <stdio.h>
struct ngaysinh 
{
	char ngay[5],thang[5],nam[5];
};
struct sinhvien {
	int sbd;
	char hoten[50];
	struct ngaysinh ns;
	float dt,dl,dh;
};
void nhap(sinhvien*arr){
	int n;
	printf("nhap danh sach sinh vien:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap thong tin thi sinh thu %d\n",i+1);
		printf("nhap so bao danh :");
		scanf("%d",&arr[i].sbd);
		printf("nhap ho ten thi sinh:");
		fflush(stdin);
		gets(arr[i].hoten);
		printf("nhap lan luot ngay sinh thi sinh:\n");
		fflush(stdin);
		gets(arr[i].ns.ngay);
		gets(arr[i].ns.thang);
		gets(arr[i].ns.nam);
		printf("nhap diem toan thi sinh :");
		scanf("%f",&arr[i].dt);
		printf("nhap diem ly thi sinh :");
		scanf("%f",&arr[i].dl);
		printf("nhap diem hoa thi sinh :");
		scanf("%f",&arr[i].dh);
		printf("\n");
	
}
}
main(){
	sinhvien arr[100];
 	nhap(arr);
	
}
