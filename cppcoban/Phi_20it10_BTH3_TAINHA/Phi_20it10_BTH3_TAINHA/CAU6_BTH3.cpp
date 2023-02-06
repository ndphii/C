#include <stdio.h>
#include <String.h>
#include <math.h>
#include <conio.h>

long giaithua(int n){
	int giaithua=1;
	for(int i=1;i<=n;i++){
		giaithua*=i;
	}
	return giaithua;
}
void ptb2(float a,float b,float c){
	float d,x,x1,x2;
	d=b*b-4*a*c;
	if (a==0){
		if(b==0){
			printf("phuong trinh co vo so nghiem.");
		}else {
			printf("phuong trinh co 1 nghiem phan biet:x=%f",-c/b);
		}
		return ;
	}else{
		 if (d==0){
				x=-b/2*a;
				printf("phuong trinh co nghiem kep x=%0.2f",x);
		}else if (d<0){
			printf("phuong trinh vo nghiem.");
		}else{
			x1=(-b+sqrt(d))/2*a;
			x2=(-b-sqrt(d))/2*a;
			printf("phuong trinh co 2 nghiem x1=%0.2f x2=%0.2f",x1,x2);
		}
	}
	
}

main()
{	float a,b,c;
	int n;
	char action;
	char end[10];
	char countinue[10]="y";
	printf("************************************************\n*	   MENU CHUC NANG 		       *\n*	a-TINH GIAI THUA                       *\n*	b-TINH PTB2                            *\n*	c-KET THUC CHUONG TRINH                *");
	printf("\n************************************************");
	printf("\nHay chon chuc nang can thuc hien:");

	// so sanh 2 chuoi neu khac nhau thi tiep tuc lam chuong trinh
	while(strcmp(countinue,end)!=0){
		scanf("%c",&action);
		switch(action){
			case 'a':
				printf("nhap n de tinh giai thua:");
				scanf("%d",&n);
				printf("%d!=%ld",n,giaithua(n));
				break;
			case 'b':
				printf("\nnhap a,b,c lan luot de tinh ptb2:");
				scanf("%f %f %f",&a,&b,&c);
				ptb2(a,b,c);
				break;
		 case 'c':
		 		char e[10]="y";
				printf("\nKet thuc chuong trinh(y/n)?");
				gets(end);
				scanf("%c",&end);
				if(strcmp(end,e)!=0)
					printf("\nmoi ban tiep tuc chon chuc nang:");
				else 	printf("\nhen gap lai!");
				break;
		}
		if(action=='a'||action=='b'){
			strcpy(end, countinue);// copy chuoi countinue cho chuoi end de bieu thuc dieu kien trong while sai de thoat vong lap
		}
		}
	
	}


	

