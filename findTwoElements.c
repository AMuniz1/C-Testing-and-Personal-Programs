#include <stdio.h>
#define SIZE 5

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
//iterative function
void findTwoElements(int* arr, size_t size, int value,int *iPtr, int *jPtr){
  int greenflag = 0;
  for(int i = 0; i< size; i++){
    for(int j = i+1; j <size; j++){
      if(arr[i]+arr[j]==value){
        *iPtr = i;
        *jPtr = j;
        greenflag = 1;
      }
    }
  }
  if(greenflag== 0){
    *iPtr = 0;
    *jPtr = 0;
  }
}
//recursive function
void find2Elements(int* arr,size_t size, int value, int *iPtr, int *jPtr){
  int i, j;
  i = 0;
  j = size-1;
  int currentSum;
  int greenflag = 0;
  while(i<j){
    currentSum = arr[i]+arr[j];
    if(currentSum == value){
      *iPtr = i;
      *jPtr = j;
      i++;
      greenflag = 1;
    }
    else if(currentSum < value){
      i++;
    }
    else{
      j--;
    }
  }
  if(greenflag == 0){
    *iPtr = 0;
    *jPtr = 0;
  }
}
int main(void){
  int array[SIZE];
  inputArray(array, SIZE);//inicializa
  bubbleSort(array, SIZE);//ordena
  printArray(array, SIZE);//imprime array ordenado
  int valor;
  printf("Enter the value to search: \n");
  scanf("%d", &valor);
  int a,b;
  //findTwoElements(array, SIZE, valor, &a, &b);
  //printf("array[%d] + array[%d] == %d\n", a, b, valor);
  find2Elements(array, SIZE, valor, &a, &b);
  printf("array[%d] + array[%d] == %d\n", a, b, valor);

  return 0;
}
