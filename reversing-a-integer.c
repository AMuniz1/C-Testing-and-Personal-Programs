#include <stdio.h>

int main(void){

  unsigned int num, remainder, reverseNum;
  printf("Enter a integer: \n");
  scanf("%d", &num);

  reverseNum = 0;
  unsigned int numTemp = num;

  while(numTemp > 0){
    remainder = numTemp%10;
    reverseNum = reverseNum * 10 + remainder;
    numTemp = numTemp/10;
  }
  printf("The reverse of %u is %u\n", num, reverseNum);

  return 0;
}
