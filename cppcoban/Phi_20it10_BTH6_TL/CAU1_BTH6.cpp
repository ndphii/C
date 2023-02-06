#include <stdio.h>
main ()
{ 
	int n,i;
	printf("nhâp n: ");
	scanf ("%d" ,&n);
	i=1;
	printf("cac uoc cua %d la:" ,n);
	while (i<n)
		{
	if(n%i==0)
	printf(" %d " ,i);
	i++;
}
}
