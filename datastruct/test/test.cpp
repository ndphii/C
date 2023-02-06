#include <stdio.h>
int main()
{
  // Khai báo + kh?i t?o bi?n value = 10
  int value = 10;
 
  // L?y giá tr? c?a bi?n value
  printf("\nGia tri cua `value` = %d", value);
  // L?y d?a ch? c?a bi?n value
  printf("\nDia tri cua `value` = %d", &value);
 
  printf("\n-------------------\n");
 
  /* 
  Khai báo + kh?i t?o bi?n con tr? p 
  có giá tr? là d?a ch? c?a bi?n value 
  */
  int *p = &value;
 
  // L?y giá tr? c?a con tr? p
  printf("\nGia tri cua con tro `p` = %d", p);
  // L?y d?a ch? c?a con tr? p
  printf("\nDia tri cua con tro `p` = %d", &p);
  // L?y giá tr? c?a bi?n ma con tr? p dang tr? t?i dùng toán t? *
  printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);
 
  printf("\n-------------------\n");
 
  /* 
  Thay d?i giá tr? c?a bi?n value thông qua con tr? p
  Gi?ng nhu hàm scanf() có th? thay d?i giá tr? c?a bi?n khi nh?n vào d?a ch?,
  con tr? khi có d?a ch? c?a 1 bi?n hoàn toàn có th? thay d?i giá tr? c?a
  bi?n dó theo cách du?i dây: 
  */
  // L?y giá tr? c?a bi?n value
  printf("\nGia tri cua `value` = %d", value);
  // Thay d?i giá tr? c?a bi?n value thông qua `p`
  *p = 100;
  // L?y giá tr? c?a bi?n value
  printf("\nGia tri cua `value` = %d", value);
  // L?y giá tr? c?a bi?n ma con tr? p dang tr? t?i dùng toán t? *
  printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);
 
  printf("\n-------------------\n");
 
  /*
  Vi?c l?y giá tr? c?a bi?n thông qua con tr? 
  ch? là 1 cách khác d? l?y du?c giá tr? c?a bi?n dó. 
  
  */
  value = 1000;
  // L?y giá tr? c?a bi?n value
  printf("\nGia tri cua `value` = %d", value);
  // L?y giá tr? c?a bi?n ma con tr? p dang tr? t?i dùng toán t? *
  printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);
}
