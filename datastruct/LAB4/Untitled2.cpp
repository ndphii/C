#include<stdio.h>
#include<time.h>
int main(){
	clock_t starttime, endtime;
	double totaltime;
	int i=0, j, n=0, min, index;
	int arr[100000];
	FILE* fptr;
	fptr = fopen("SortingTime.txt","r");
	while(fscanf(fptr,"%d",&arr[i])==1){
		n++;
		i++;
	}
	starttime= clock();
	printf("Start time: %f\n",(float)starttime);
	for(i=0;i<n-1;i++){
		min=arr[i];
		for(j=i+1;j<n;j++){
			if(arr[j]<min){
				min=arr[j];
				index=j;
			}
		}
		int temp=arr[i];
		arr[i]=min;
		arr[index]=temp;
	}
	endtime = clock();
	printf("%f\n",(float)endtime);
	totaltime = ((double)(endtime-starttime)) /CLOCKS_PER_SEC;
	int X,count=0;;
	printf("hay nhap so can tim:");scanf("%d",&X);
	for(i=0;i<n;i++){
		if(arr[i]==X){
			count++;
		}
	}
	printf("tim thay %d %d lan",X,count);
	int mid,low=0,hight=n-1;
	int timthay;
	timthay=-1;
	while(low<=hight){
		mid = (low+hight)/2;
		if(X>arr[mid]) low=mid+1;
		else if(X<arr[mid]) hight=mid-1;
		else 	if(X==arr[mid]) timthay=1;
	}
	if(timthay!=-1)		printf("tim thay %d",X);
		printf("\n \n Endtime:%f\n",(float)endtime);
		printf("\n \n Total time of execution = %f",totaltime);
	return 0;
}
