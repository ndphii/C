#include <stdio.h>
void towers(int num, char fromrod, char torod, char auxrod)
{
 if (num == 1)
 {
 printf("\n Move disk 1 from rod %c to rod %c", fromrod, torod);
 return;
 }
 towers(num - 1, fromrod, auxrod, torod);
 printf("\n Move disk %d from rod %c to rod %c", num, fromrod, torod);
 towers(num - 1, auxrod, torod, fromrod);
}
main(){
	char fromrod='A',torod='B',auxrod='C';
	int n=3;
	towers(n,fromrod,torod,auxrod);
}
