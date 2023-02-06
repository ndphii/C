#include<stdio.h>
 
int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}
 
int BSCNN(int a, int b) {
    return (a * b) / USCLN(a, b);
}
  
main() {
 int a, b;
 scanf("%d %d",&a,&b);
 printf("%d %d",USCLN(a,b),BSCNN(a,b)) ;
 
}
