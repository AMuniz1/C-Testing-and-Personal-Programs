#include <stdio.h>

int summation(int number){
  if(number == 1){
    return number;
  }
  else{
    return (number + summation(number-1));
  }
}

int main(void){

  printf("summation(6) = 1+2+3+4+5+6 = %d\n", summation(6));

  return 0;
}
