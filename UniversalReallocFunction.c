#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void* myRealloc(void* srcblock, size_t oldSize, size_t newSize){
  void *myArr = malloc(newSize);
  if(!myArr){
    exit(1);
  }
  int smallSize;
  if(oldSize< newSize){
    smallSize = oldSize;
  }
  else{
    smallSize = newSize;
  }
  memcpy(myArr,srcblock, smallSize);

  return myArr;
}
size_t sizeArray(){
  size_t size;
  printf("Enter the size of the array: \n");
  scanf("%lu", &size);

  return size;
}
int *generateArray(size_t size){
  int *arr;
  arr = (int*)malloc(size*sizeof(int));
  for(size_t i = 0; i< size; i++){
    scanf("%d", &arr[i]);
  }
  if(arr != NULL){
    printf("Allocation suceeded!\n");
  }
  else{
    printf("Allocation failed...\n");
    exit(1);
  }
  return arr;
}
void printArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%lu] = %d\t", i, arr[i]);
  }
  puts("");
}
int main(int argc, char const *argv[]) {
  size_t len = sizeArray();
  int *numbers;
  numbers = generateArray(len);
  printArray(numbers, len);
  int *newNumbers = NULL;
  size_t newLen = sizeArray();
  newNumbers = (int*)myRealloc(numbers, len*sizeof(int), newLen*sizeof(int));
  if(newLen> len){
    for(size_t i = len; i < newLen; i++){
      scanf("%d", &newNumbers[i]);
    }
  }
  free(numbers);
  numbers = NULL;
  printArray(newNumbers, newLen);
  return 0;
}
