//swap == troca, permuta em inglês
// a intenção é trocar os valores a e b
// a passa a valer b, b passa a valer a
#include <stdio.h>

void swap(int num1, int num2);
int main(void){
  int a = 5, b = 7;
  printf("a ANTES swap é : %d\n", a);
  printf("b ANTES swap é : %d\n", b);
  swap(a,b);
  printf("a DEPOIS swap é : %d\n", a);
  printf("b DEPOIS swap é : %d\n", b);
  return 0;
}
void swap(int num1, int num2){
  int temp;
  temp = num1;
  num1 = num2;
  num2 = temp;
}
