#include<stdio.h>
void ChinhPhuong(int n) {
 		int i = 1, j, dem = 0;
  		int chinhphuong=0;
		while(dem<n) { // dem so lan de in nso chinh phuong
 			chinhphuong=0;
 			
       		for(j=1; j<=i; j++) {//ki?m tra so chinh phuong
      			if(j*j==i) {
  					chinhphuong = 1;
				}									
			}
			if(chinhphuong==1) { 
					printf(" %d",i);
					dem++;// neu so do dung dieu kien thi dã in mot so ne tang bien diem de dungg so lan in
			}
 				i++; // du dung hay khong cung tang i len de kiem tra so so khac 
		}
}
main() 
{
       int n;
	do {
 		printf("Nhap n: ");
 		scanf("%d",&n);
 		} while(n<=0);
		printf("Cac so chinh phuong la: ");
 		ChinhPhuong(n);
}




