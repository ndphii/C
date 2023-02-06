#include <stdio.h>
#include<string.h>
struct sach{
	char tensach[100];
	char tentacgia[100];
	int namph;
	int gia;
};

main(){	
	int i,n;
	scanf("%d",&n);
	struct sach sc[n];
	for(i=0;i<n;i++){
		fflush(stdin);
		gets(sc[i].tensach);
		fflush(stdin);
		gets(sc[i].tentacgia);
		scanf("%d",&sc[i].namph);
		scanf("%d",&sc[i].gia);
	}
	for(i=0;i<n;i++){
		printf("\n%s",sc[i].tensach);
		printf("\n%d",sc[i].gia);
		if(sc[i].gia>=200000){
		printf("\n%d",sc[i].gia-10000);
		}else{
			printf("\n%d",sc[i].gia-5000);
		}
	}
	
	
}
