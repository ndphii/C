#include <stdio.h>
void nhapmang(float *arr,int n){
	for(int i=0;i<n;i++){
		printf("arr[%d]:",i);
		scanf("%f",&*(arr+i));
	}
	
}
void avgB(float *arr,int n){
	float average1=0,average2=0;
	int a1=0,a2=0;
	for(int i=0;i<n;i++){
		if(*(arr+i)<0.01){
			average1+=*(arr+i);
			a1++;
		}
		else{
			average2+=(*(arr+i));
			a2++;
		}
		
	}
	printf("\nB) Average1=%.4f; Average2=%.4f",average1/(float)a1,average2/(float)a2);
}

void avgA(float *arr,int n){
	float average=0;
	for(int i=0;i<n;i++){
		average+=(*(arr+i));
	}
	printf("A) Average=%.4f",average/(float)n);
}

main(){
	int n;
	float arr[n];
	printf("nhap do dai mang:");
	scanf("%d",&n);
	nhapmang(arr,n);
	avgA(arr,n);
	avgB(arr,n);
}
