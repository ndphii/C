#include <stdio.h>

int main() {
   int n,i,j,k=1;
	
   scanf("%d",&n);
   if(n<=0)
   printf("N");
   else{
   for(i = 0; i <=n; i++) {
      for(j=0;j < i; j++)
         printf("%d ", k++);

      printf("\n");
   }
	}
   return 0;
}
