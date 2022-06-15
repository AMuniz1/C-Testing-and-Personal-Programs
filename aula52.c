#include <stdio.h>
#include <sdtlib.h>

#define SIZE 6

int *createArray();
void printArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%u] = %d\n", i, arr[i]);
  }
}
int main(void){
  int *array;
  array = createArray();
  printArray(array, SIZE);
  return 0;
}
int *createArray(){
  int myArray[SIZE];
  printf("You must enter %d elements of this array: \n", SIZE);
  for(size_t i = 0; i < SIZE; i++){
    printf("Enter the %u element: \n", i+1);
    scanf("%d", &myArray[i]);
  }
  return myArray;
}
