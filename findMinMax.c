#include <stdio.h>

void findMinMax(int num1, int num2, int *ptrMax, int *ptrMin){
  if(num1 > num2){
    *ptrMax = num1;
    *ptrMin = num2;
  }
  else{
    *ptrMax = num2;
    *ptrMin = num1;
  }
}

int main(void){

  int a, b, max, min;
  printf("Entre com dois números: \n");
  scanf("%d %d", &a, &b);

  findMinMax(a, b, &max, &min);
  printf("O maior entre %d e %d é %d\n", a, b, max);
  printf("E o menor entre %d e %d é %d\n", a, b, min);

  return 0;
}
