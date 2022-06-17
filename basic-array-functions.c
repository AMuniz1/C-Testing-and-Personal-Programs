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
    printf("array[%lu] = %d\n", i, arr[i]);
  }
}
void bubbleSort(int *arr, size_t size){

  void swap(int *element1Ptr, int *element2Ptr);

  for (size_t pass = 0; pass < size-1; pass++){
    for (size_t j = 0; j < size-1; j++) {
      if(arr[j]>arr[j+1]){
        swap(&arr[j], &arr[j+1]);
      }
    }
  }
}
void swap(int *element1Ptr, int *element2Ptr){
  int hold = *element1Ptr;
  *element1Ptr = *element2Ptr;
  *element2Ptr = hold;
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
