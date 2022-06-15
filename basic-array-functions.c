//input values on array and print it
#include <stdio.h>

void inputArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("\nEnter the value #%u: ", i+1);
    scanf("%d", &arr[i]);
  }
}
void printArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%u] = %d\n", i, arr[i]);
  }
}
size_t sizeArray(){
  size_t size;
  printf("Enter the size of the array: \n");
  scanf("%u", &size);

  return size;
}
int main(void){
  size_t len = sizeArray();
  int array[len];
  inputArray(array, len);
  printArray(array, len);
  return 0;
}
