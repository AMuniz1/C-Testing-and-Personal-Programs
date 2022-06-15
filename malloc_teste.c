#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

  int *bArr;
  size_t arraySize;
  printf("Size of array: \n");
  scanf("%u", &arraySize);
  bArr = (int*)malloc(sizeof(int)*arraySize);
  if(bArr != NULL){
    printf("Allocation suceeded!\n");
  }
  else{
    printf("Allocation failed...\n");
  }

  return 0;
}
