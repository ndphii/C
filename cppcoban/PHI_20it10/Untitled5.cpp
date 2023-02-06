#include <stdio.h>
 float sotien(float giatientruoc5h30,float giatiensau5h30){
 	printf("\ntong so tien:");
	 int tongtien=giatientruoc5h30+giatiensau5h30;
	return tongtien;
}

 float truoc5h30(float GBD,float GKT ){
	 float giatientruoc5h30=(GKT-GBD)*2500;
	return giatientruoc5h30;
}

 float sau5h30(float GBD,float GKT){
	 float giatiensau5h30=(GKT-GBD)*3000;
	return giatiensau5h30;
}

main(){
	float GBD,GKT;
	do{
	printf("\nnhap gio bat dau thue:");
	scanf("%f",&GBD);
	printf("\nnhap gio ket thuc thue:");
	scanf("%f",&GKT);
	}while((GBD<6||GKT>21||GBD>GKT)&&(GBD-(int)GBD==0||GKT-(int)GKT==0));
	
	if(GBD>17.5){
		printf("%d.VND",(int)sotien(0,sau5h30(GBD,GKT)));
	}
	else if(GKT<17.5){
		printf("%d.VND",(int)sotien(truoc5h30(GBD,GKT),0));
	}
	else if(GBD<17.5 && GKT>17.5){
		printf("%d.VND",(int)sotien(truoc5h30(GBD,17.5),sau5h30(17.5,GKT)));
	}
	
	
	
}
