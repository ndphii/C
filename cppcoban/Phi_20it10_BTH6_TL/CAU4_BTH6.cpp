#include <stdio.h>
#include <math.h>
main ()
	{
	unsigned int i=2,n,count=0;
	printf("nhap n: ");
	scanf("%d", &n);
	if(n<2){
		printf("%d khong phai la so nguyen to", n);
		return 0;
	}
	else{
		while (i<=sqrt(n)) {
			if (n%i==0){
				count++;
			}
		i++;
		}
	}
	if (count==0)
		printf("%d la so nguyen to", n);
	else
		printf("%d khong phai la so nguyen to", n);
}
