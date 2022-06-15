#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%lu] = %d\t", i, arr[i]);
  }
  puts("");
}
int main(void){

  int *bArr;
  size_t size;
  printf("Size of array: \n");
  scanf("%lu", &size);
  bArr = (int*)malloc(sizeof(int)*size);
  if(bArr != NULL){
    printf("Allocation suceeded!\n");
  }
  else{
    printf("Allocation failed...\n");
    exit(1);
  }
  for(size_t i = 0; i < size; i++){
    printf("\n#%lu element: ", i);
    scanf("%d", &bArr[i]);
  }
  printArray(bArr, size);
  size_t new_size;
  printf("\nEnter the new size: ");
  scanf("%lu", &new_size);
  bArr = (int*)realloc(bArr, new_size*sizeof(int));
  if(bArr!= NULL){
    printf("Continue...\n");
  }
  else{
    printf("ERROR! EXITING!\n");
    exit(1);
  }
  if(new_size > size){
    for(size_t i = size; i < new_size; i++){
      printf("\nEnter #%lu element: ", i);
      scanf("%d", &bArr[i]);
    }
  }
  printArray(bArr, new_size);

  return 0;
}
