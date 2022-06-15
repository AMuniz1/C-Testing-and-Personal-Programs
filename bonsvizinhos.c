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
void goodNeighbors(int* arr, size_t size, int *ptrGood){
  *ptrGood = 0;
  int candidate;
  for(size_t i = 1; i < size-1; i++){
    candidate =  (arr[i-1]+arr[i+1]);
    if(arr[i]== candidate){
      *ptrGood = 1;
    }
  }
}


int main(void){
  int bom_vizinho;
  int array[SIZE];
  inputArray(array, SIZE);//inicializa
  //printArray(array, SIZE);imprime
  goodNeighbors(array, SIZE, &bom_vizinho);
  printf("%d\n", bom_vizinho);


  return 0;
}
