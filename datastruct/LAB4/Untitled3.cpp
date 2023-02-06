#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
#include<dos.h>
int Binary_Search(int *,int ,int );
void Bubble(int *,int);
void Init(int *,int);
int Binary_Search(int *A,int X,int n){
	int mid,low=0,higth=n-1;
	while(low<=higth){
		mid=(low+higth)/2;
		if(X>A[mid])low=mid+1;
		else if(X>A[mid]) higth=mid-1;
		else return (mid);
	}
	return(-1);
}
void Intit(int *A,int n){
	int i;
	printf("\n Tao lap day so:");
	for(i=0;i<n;i++){
		A[i]=random(1000);
		printf("%5d",A[i]);
	}
	delay(1000);
}

