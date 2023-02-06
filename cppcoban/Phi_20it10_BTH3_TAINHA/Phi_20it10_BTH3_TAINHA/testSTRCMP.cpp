#include <stdio.h>
#include <string.h>
int main()
{
 char pass[10] = "abc123";
 char s[20];
 do
 {
 printf("Moi ban nhap mat khau: ");
 gets(s);
 } while ( strcmp(s, pass) != 0);
 printf("Dang nhap thanh cong!\n");
 return 0;
}
