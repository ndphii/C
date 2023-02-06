#include <stdio.h>

int fibo(int i)
{
	if(i == 0)
      return 0;
    if(i == 1)
      return 1;
   return fibo(i-1) + fibo(i-2);
}
 main()
{
    int i,n;
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
       printf("%d ", fibo(i));
    }
   
}
