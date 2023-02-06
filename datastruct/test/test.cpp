#include <stdio.h>
int main()
{
  // Khai b�o + kh?i t?o bi?n value = 10
  int value = 10;
 
  // L?y gi� tr? c?a bi?n value
  printf("\nGia tri cua `value` = %d", value);
  // L?y d?a ch? c?a bi?n value
  printf("\nDia tri cua `value` = %d", &value);
 
  printf("\n-------------------\n");
 
  /* 
  Khai b�o + kh?i t?o bi?n con tr? p 
  c� gi� tr? l� d?a ch? c?a bi?n value 
  */
  int *p = &value;
 
  // L?y gi� tr? c?a con tr? p
  printf("\nGia tri cua con tro `p` = %d", p);
  // L?y d?a ch? c?a con tr? p
  printf("\nDia tri cua con tro `p` = %d", &p);
  // L?y gi� tr? c?a bi?n ma con tr? p dang tr? t?i d�ng to�n t? *
  printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);
 
  printf("\n-------------------\n");
 
  /* 
  Thay d?i gi� tr? c?a bi?n value th�ng qua con tr? p
  Gi?ng nhu h�m scanf() c� th? thay d?i gi� tr? c?a bi?n khi nh?n v�o d?a ch?,
  con tr? khi c� d?a ch? c?a 1 bi?n ho�n to�n c� th? thay d?i gi� tr? c?a
  bi?n d� theo c�ch du?i d�y: 
  */
  // L?y gi� tr? c?a bi?n value
  printf("\nGia tri cua `value` = %d", value);
  // Thay d?i gi� tr? c?a bi?n value th�ng qua `p`
  *p = 100;
  // L?y gi� tr? c?a bi?n value
  printf("\nGia tri cua `value` = %d", value);
  // L?y gi� tr? c?a bi?n ma con tr? p dang tr? t?i d�ng to�n t? *
  printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);
 
  printf("\n-------------------\n");
 
  /*
  Vi?c l?y gi� tr? c?a bi?n th�ng qua con tr? 
  ch? l� 1 c�ch kh�c d? l?y du?c gi� tr? c?a bi?n d�. 
  
  */
  value = 1000;
  // L?y gi� tr? c?a bi?n value
  printf("\nGia tri cua `value` = %d", value);
  // L?y gi� tr? c?a bi?n ma con tr? p dang tr? t?i d�ng to�n t? *
  printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);
}
