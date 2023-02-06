#include<stdio.h>
int fibo(int n)
{
   if ( n == 0 )
     return 0;
   else if ( n == 1 )
     return 1;
   else
     return ( fibo(n-1) + fibo(n-2) );
}
main()
{
   int n,arr[n],sum=0;
   printf("nhap n:");
   scanf("%d",&n);
   printf("\n%d so fibonacci dau tien :",n);
   for(int i=0;i<n;i++)
   {
      printf("%d  ", fibo(i));
    	sum+=fibo(i);
   }
	printf("\n\ntong %d so fibonacci dau tien = %d",n,sum);

}
