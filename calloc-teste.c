#include <stdio.h>
#include <stdlib.h>

void printArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%lu] = %d\t", i, arr[i]);
  }
  puts("");
}
int main(int argc, char const *argv[]) {

  int *array;
  size_t arraySize;
  printf("What is the size of the array? \n");
  scanf("%u", &arraySize);
  array = (int*)calloc(arraySize, sizeof(int));
  if(!array){
    printf("Something is wrong!\n");
    exit(1);
  }
  for(size_t i = 0; i < arraySize; i++){
    printf("%u element: \n", i);
    scanf("%d", &array[i]);
  }
  printArray(array, arraySize);
  return 0;
}
