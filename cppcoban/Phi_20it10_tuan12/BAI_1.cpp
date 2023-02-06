#include <stdio.h>
 #include <conio.h>
void NhapMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
    }
}
 
void XuatMaTran(int a[][100], int m, int n)
{
	 printf("\nMa tran vua nhap\n");
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         printf("%d  ", a[i][j]);
      printf("\n\n");
   }
}

int min(int a[][100], int m, int n){
	int Min=a[0][0];
	int chisoI,chisoJ;
	for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
      		if(a[i][j]<Min){
        		Min=a[i][j];
        		chisoI=i;
        		chisoJ=j;
		    }
	   }
   }
	printf("Nam o hang %d cot %d ",chisoI+1,chisoJ+1);
	return Min;
	
}
int max(int a[][100], int m, int n){
	int Max=a[0][0];
	int chisoI,chisoJ;
	for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
      		if(a[i][j]>Max){
        		Max=a[i][j];
        		chisoI=i;
        		chisoJ=j;
		    }
	   }
   }
	printf("\nNam o hang %d cot %d ",chisoI+1,chisoJ+1);
	return Max;
	
}
void sochan(int a[][100], int m, int n){
	
	for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
      		if(a[i][j]%2==0){
        	printf("%d la so chan nam o vi tri hang %d cot %d\n ",a[i][j],i+1,j+1);
		    }
	   }
   }

}
 int sole(int a[][100], int m, int n){
	int count=0;
	for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
      		if(a[i][j]%2!=0){
      			count++;
		    }
	   }
   }
return count;
}
int tong(int a[][100], int m, int n){
	int sum;
	for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
      		sum+=a[i][j];
	   }
   }
return sum;

}

int tich(int a[][100], int m, int n){
	int tichh=1;
	for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
      		tichh*=a[i][j];
	   }
   }
return tichh;

}
 main(){
    int a[100][100];
    int m,n;
    printf("nhap so hang m = "); scanf("%d",&m);
    printf("nhap so cot n = "); scanf("%d",&n);
    NhapMaTran(a, m , n);
    XuatMaTran(a, m, n);
    printf("gia tri nho nhat trong ma tran la %d",min(a, m , n));
    printf("gia tri lon nhat trong ma tran la %d\n\n",max(a, m , n));
    sochan(a, m, n);
    printf("\nco %d so le trong ma tran\n",sole(a, m, n));
    printf("\ntong cac phan tu trong ma tran=%d",tong(a, m, n));
    printf("\ntich cac phan tu trong ma tran=%d",tich(a, m, n));
    getch();
   
}
