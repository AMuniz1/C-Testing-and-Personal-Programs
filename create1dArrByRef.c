#include <stdio.h>
#include <stdlib.h>


void create1DArrayByRef(size_t len, int **arrayPtr){
  int *myArr;
  myArr = (int*)malloc(len*sizeof(int));
  if(!myArr){
    printf("Something went wrong\n");
    exit(1);
  }
  size_t i;
  for(i=0; i<len; i++){
    printf("Enter the %luº element: \n", i+1);
    scanf("%d", &myArr[i]);
  }
  *arrayPtr = myArr;
}
void printArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%lu] = %d\n", i, arr[i]);
  }
}
int main(int argc, char const *argv[]) {
  size_t size;
  printf("Enter the size of the array: \n");
  scanf("%lu", &size);
  int *ptr;
  create1DArrayByRef(size, &ptr);
  printArray(ptr, size);

  return 0;
}
