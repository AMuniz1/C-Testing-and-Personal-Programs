//input values on array and print it
//recursive solution if an array is sorted or not
//return 1 if is sorted
//pass 1 if there is no repetitive element
//
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

int sortedRecursion(int* arr, size_t size, int *ptrPass){
  int resultado;
  if(size == 1){
    *ptrPass = 1;
    return 1;
  }
  resultado = sortedRecursion(arr, size-1, ptrPass);
  if((resultado != 0)&&(arr[size-1]== arr[size-2])){
    *ptrPass = 0;
  }
  if((resultado != 0)&&(arr[size-1] < arr[size-2])){
    *ptrPass = 0;
    return 0;
  }

  return resultado;//return only resultado
}
int main(void){
  int retorno, pass;
  int array[SIZE];
  inputArray(array, SIZE);//inicializa
  //printArray(array, SIZE);//imprime
  retorno = sortedRecursion(array, SIZE, &pass);

  if ((retorno == 1)&&(pass == 1)){
    printf("Array is REALLY SORTED\n");
  }
  else if((retorno == 1)&&(pass == 0)){
    printf("Array is sorted\n");
  }
  else{
    printf("Array is NOT sorted\n");
  }
  return 0;
}
