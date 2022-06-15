#include <stdio.h>

void printInBinary(int number){
  if(number <= 1){
    printf("%d", number);
  }
  else{
    printInBinary(number/2);
    printf("%d", number%2);

  }
}
int main(void){

  printInBinary(26);
  puts("");
}
