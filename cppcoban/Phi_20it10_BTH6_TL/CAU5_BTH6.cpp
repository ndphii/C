#include<stdio.h>
#include<math.h>
main()
{
	int n,j,i=1,count;
		printf("nhap n:");
		scanf("%d", &n);
		printf("cac so nguyen to nho hon %d la: ",n);
		
	while (i<= n){
		count = 0;
		j=2;
		while (j<=sqrt(i)){
			if(i % j == 0)
				count++;
			j++;	
		}
	if(count == 0 && i >= 2)
		printf("%d " ,i );
		i++;
	}
}
