#include <stdio.h>
main(){
	int x,n,sum,i=0;
	int sodu;
	printf("nhap n:");
	scanf("%d",&n);
	printf("nhap x:");
	scanf("%d",&x);
	int copyn1=n;
	int copyn2=n;
	// dem n co bao nhieu chu so
	int countN=0;
	while(copyn1!=0){
		countN++;
		copyn1/=10;
	}

	while(n!=0){
		sodu=n%10;
		i++;
		if(sodu==x){
			printf("so %d o vi tri thu %d trong %d",x,(countN-i)+1,copyn2);
			n=0;
		}
		n/=10;
	}
	
	
	
}
