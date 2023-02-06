#include <stdio.h>
int UCLN(int A, int B) {
    if (B == 0)
        return A;
    return UCLN(B, A%B);
}
 main() {
    int A,B;
    printf("nhap 2 so:");
    scanf("%d %d",&A,&B);
    printf("%d",UCLN(A,B));
}
