#include <stdio.h>
void checksochinhphuong(int n){
 int i = 0;
    while(i*i <= n){
        if(i*i == n){
            printf("%d la so chinh phuong!\n", n);
            
        }
        ++i;
    }
    printf("%d khong phai so chinh phuong!\n", n);
}
main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	checksochinhphuong(n);
}
