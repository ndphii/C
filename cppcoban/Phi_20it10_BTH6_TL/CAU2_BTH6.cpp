#include<stdio.h>
#include<conio.h>
main()
	{
	int m, n, i = 1 , j;
		printf("nhap hang:");
		scanf("%d", &m);
		printf("nhap cot:");
		scanf("%d", &n);
	while (i<=n){
			j=1;
	while (j<=m) {
			printf("* ");
			j++;
			
		}
			printf("\n");
			i++;
	} 
			getch();  
}
