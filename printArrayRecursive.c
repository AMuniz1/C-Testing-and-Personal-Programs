#include <stdio.h>

void inputArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("\nEnter the value #%u: ", i+1);
    scanf("%d", &arr[i]);
  }
}
/*void printArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%u] = %d\n", i, arr[i]);
  }
}*/
void printArrayRecursive(int* arr, size_t size){

  if(size>0){
    printf("%d\t", arr[0]);
    printArrayRecursive(arr+1, size-1);
  }
  else{
    printf("\n");
  }
}
void printArrayRecursiveBackwards(int * arr, size_t size){

  if(size>0){
    printf("%d\t", arr[size-1]);
    printArrayRecursiveBackwards(arr, size-1);
  }
  else{
    printf("\n");
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
  printf("Array impresso na ordem correta: ");
  printArrayRecursive(array, len);
  printf("Array impresso na ordem inversa: ");
  printArrayRecursiveBackwards(array, len);
  return 0;
}
