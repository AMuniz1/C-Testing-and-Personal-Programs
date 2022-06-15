#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void genericswap(void* num1, void* num2, size_t size){
  void* temp = malloc(size);
  memcpy(temp, num1, size);
  memcpy(num1, num2, size);
  memcpy(num2, temp, size);

  free(temp);
}

int main(void){

  int a = 5, b = 7;
  double x = 90.7, y = 70.8;
  printf("a: %d\nand b: %d\n", a, b);
  genericswap(&a, &b, sizeof(int));
  printf("a: %d\nand b: %d\n", a, b);
  printf("x: %.3lf\ny: %.3lf\n", x, y);
  genericswap(&x, &y, sizeof(double));
  printf("x: %.3lf\ny: %.3lf\n", x, y);
  return 0;
}
