#include <stdio.h>
#include <stdlib.h>

void EvenAndOddArrays(int *srcArray, size_t size, int **OddArray, int **EvenArray, size_t *sizeEven, size_t *sizeOdd){
  size_t even = 0, odd = 0; //size of odd and even arrays initialized
  for(size_t i = 0; i < size; i++){
    if(srcArray[i]%2 == 0){
      ++even;
    }
    else{
      ++odd;
    }
  }
  *sizeEven = even;
  *sizeOdd = odd;
  int k = 0, l = 0;
  int *tempEven = (int*)malloc(even*sizeof(int));
  int *tempOdd = (int*)malloc(odd*sizeof(int));
  for(size_t j = 0; j < size; j++){
    if(srcArray[j]%2 == 0){
      tempEven[k++] = srcArray[j];
    }
    else{
      tempOdd[l++] = srcArray[j];
    }
  }
  *OddArray = tempOdd;
  *EvenArray = tempEven;
}
void inputArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("\nEnter the value #%lu: ", i+1);
    scanf("%d", &arr[i]);
  }
}
void printArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%lu] = %d\t", i, arr[i]);
  }
}
size_t sizeArray(){
  size_t size;
  printf("Enter the size of the array: \n");
  scanf("%lu", &size);

  return size;
}
int main(int argc, char const *argv[]) {
  size_t len = sizeArray();
  int array[len];
  inputArray(array, len);
  printArray(array, len);
  int *ArrayEven, *ArrayOdd;
  size_t sizeEven, sizeOdd;
  EvenAndOddArrays(array, len, &ArrayOdd, &ArrayEven, &sizeEven, &sizeOdd);
  printf("\nOdd array: \n");
  printArray(ArrayOdd, sizeOdd);
  printf("\nEven array: \n");
  printArray(ArrayEven, sizeEven);
  puts("");
  free(ArrayOdd);
  free(ArrayEven);
  return 0;
}
