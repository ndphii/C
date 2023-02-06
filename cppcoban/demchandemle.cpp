#include <stdio.h>
void countnum(int n){
	int copyN=n,demchan=0,demle=0;
	while(n!=0){
		int checknum=0;
		checknum=n%10;
		if(checknum%2==0)
			demchan++;
		else 
			demle++;
		n=n/10;
	}
	printf("co %d chu so chan va %d chu so le trong trong so %d!\n ",demchan,demle,copyN);
}

main(){
	int n;
	do{
	printf("nhap mot so nguyen duong:");
		scanf("%d",&n);
	}while(n<=0||(n-(int)n!=0));
	countnum(n);
}
