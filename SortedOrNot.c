//input values on array and print it
//iterative solution if an array is sorted or not
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

int sortedOrNot(int* arr, size_t size, int *ptrPass){
  *ptrPass = 1;
  for(size_t i = 1; i < size; i++){
    if(arr[i]<= arr[i-1]){
      *ptrPass = 0; //the array is not "Really sorted"
    }
    if(arr[i] < arr[i-1]){//cond2
      return 0;
    }
  }
  return 1;//this is only true if cond2 is false for the entire array
  //remember a function in C only returns 1 variable!
}

int main(void){
  int retorno, pass;
  int array[SIZE];
  inputArray(array, SIZE);//inicializa
  //printArray(array, SIZE);//imprime
  retorno = sortedOrNot(array, SIZE, &pass);

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
