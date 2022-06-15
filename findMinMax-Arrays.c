//input values on array and print it
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
void findMinMax(int* arr, size_t size, int *ptrMax, int *ptrMin){
  *ptrMax = -2000;
  *ptrMin = 2000;
  for(size_t i = 0; i < size; i++){
    if(arr[i] < *ptrMin){
      *ptrMin = arr[i];
    }
    if(arr[i] > *ptrMax){
      *ptrMax = arr[i];
    }
  }
}

int main(void){
  int array[SIZE];
  int min, max;
  inputArray(array, SIZE);//inicializa
  //printArray(array, SIZE);imprime
  findMinMax(array, SIZE, &max, &min);
  printf("O menor valor do array é %d\n", min);
  printf("O maior valor do array é %d\n", max);
  return 0;
}
