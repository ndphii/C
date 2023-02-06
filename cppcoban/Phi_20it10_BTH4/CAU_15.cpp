#include <stdio.h>
void minmaxtbc(int n){
	int arr[n];
	printf("Nhap gia tri cac phan tu cua day so: \n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    int min=arr[1];
    for(int i=0;i<n;i++){
    	if(arr[i]>max){
    		max=arr[i];
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]<min){
    		min=arr[i];
		}
	}

	printf("max=%d\nmin=%d",max,min);
	printf("\ntrung binh cong cua %d va %d=%f",max,min,(float)(max+min)/2);
}
main(){
	int n;
	
   	 printf("Nhap so phan tu cua day so: ");
   	 scanf("%d", &n);
    minmaxtbc(n);
}
