/*
Recursive and iterative function that calculates the maximum sum of two ADJACENTS elements of an array
*/
#include <stdio.h>
#define SIZE 10

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
void bubbleSort(int * const arr, const size_t size){

  void swap(int *element1Ptr, int *element2Ptr);

  for (unsigned int pass = 0; pass < size-1; pass++){
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

int iterativeFindMaximumSum(int *arr, size_t size){

  return arr[size-2]+arr[size-1];
}

int recursiveFindMaximumSum(int *arr, size_t size){
  int current_sum;
  int maxSumSoFar;
  if(size==2){
    return arr[0]+arr[1];
  }
  current_sum = arr[0]+arr[1];
  maxSumSoFar = recursiveFindMaximumSum(arr+1, size-1);
  if(maxSumSoFar > current_sum){
    return maxSumSoFar;
  }
  else{
    return current_sum;
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
  inputArray(array, len);//inicializa
  printf("Lista não ordenada: \n");
  printArray(array, len);//imprime
  //bubbleSort(array, SIZE);//ordena
  //printf("Lista ordenada: \n" );
  //printArray(array, SIZE);//imprime lista ordenada
  //int sum = iterativeFindMaximumSum(array, SIZE);//imprime
  int sum = recursiveFindMaximumSum(array, len);
  printf("Maximum sum is %d\n", sum);
  return 0;
}
