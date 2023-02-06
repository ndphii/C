#include <stdio.h>
 int sotien(int giatientruoc12h,int giatiensau12){
 	printf("tong so tien luong:");
	 int tongtien=giatientruoc12h+giatiensau12;
	return tongtien;
}

 int truoc12h(int GBD,int GKT ){
	 int giatientruoc12h=(GKT-GBD)*6000;
	return giatientruoc12h;
}

 int sau12h(int GBD,int GKT){
	 int giatiensau12=(GKT-GBD)*7500;
	return giatiensau12;
}

main(){
	int GBD,GKT;
	do{
	printf("\nnhap gio bat dau lam:");
	scanf("%d",&GBD);
	printf("\nnhap gio ket thuc lam:");
	scanf("%d",&GKT);
	}while((GBD<6||GKT>18||GBD>GKT)&&(GBD-(int)GBD==0||GKT-(int)GKT==0));
	
	if(GBD>=12){
		printf("%d.VND",sotien(0,sau12h(GBD,GKT)));
	}
	else if(GKT<12){
		printf("%d.VND",sotien(truoc12h(GBD,GKT),0));
	}
	else if(GBD<12 && GKT>=12){
		printf("%d.VND",sotien(truoc12h(GBD,12),sau12h(12,GKT)));
	}
	
	
	
}
