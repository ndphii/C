#include <stdio.h>
main(){
	int n,k,a[100];
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int t;
    for(int i=0;i<n;i++)
        for(int j=0;j<i;j++){
            if(a[j]<a[i]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
	
	int count=0;
	for(int i=k;i>0;i--){
		if(a[i]>=a[k])
		count++;
	}
	printf("%d ",count);
} 
