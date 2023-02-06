#include<stdio.h>
main()
{	int m,n;
	printf("nhap so hang va so cot:");
	scanf("%d%d",&m,&n);
	
	for (int i = 1; i <=m; i++) {
		for (int j = 1; j <=n; j++) {
		 	if(i == 1 || j == 1 || i == m || j == n){
		        printf("* ");
            }
            else{
                printf("  ");
            }
        }
		        printf("\n");   
	}
}
