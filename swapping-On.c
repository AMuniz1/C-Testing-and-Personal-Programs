#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void inputArray(int *arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("\nEnter the value #%lu: ", i+1);
    scanf("%d", &arr[i]);
  }
}
void printArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%lu] = %d\t", i, arr[i]);
  }
  puts("");
}
size_t sizeArray(){
  size_t size;
  printf("Enter the size of the array: \n");
  scanf("%lu", &size);

  return size;
}
void swap(int *value1, int *value2){
  int temp;
  temp = *value1;
  *value1 = *value2;
  *value2 = temp;
}
/*
void swapArraysOn(int *arr1, int *arr2, size_t size){
  for(size_t i = 0; i < size; i++){
    swap(&arr1[i], &arr2[i]);
  }
}*/
void swapArraysO1(void** ptr1, void** ptr2, size_t size){
  void **temp = malloc(size);
  *temp = NULL;
  memcpy(temp, ptr1, size);
  memcpy(ptr1, ptr2, size);
  memcpy(ptr2, temp, size);
  free(temp);
  temp = NULL;
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
int main(void){
  size_t len = sizeArray();
  int *array1 = generateArray(len);
  int *array2 = generateArray(len);
  printf("Array values BEFORE swap.\n");
  printArray(array1, len);
  printArray(array2, len);
  //swapArraysOn(array1, array2, len);
  swapArraysO1((void**)&array1,(void**)&array2, len*sizeof(int));
  printf("Array values AFTER swap.\n");
  printArray(array1, len);
  puts("");
  printArray(array2, len);

  return 0;
}
