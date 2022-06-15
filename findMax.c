//search the highest value in an array
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maximumValue(const int arr[], size_t size){
  int highest = 0;
  for(size_t index = 0; index < size; index++){
    if(arr[index]> highest){
      highest = arr[index];
    }
  }
  return highest;
}
void printArray(int arr[], size_t size){
  for(size_t i = 0; i < size; i++){
    printf("grades[%u] = %d\n", i, arr[i]);
  }
}
int main(void){
  int result;
  srand(time(NULL)); //semente para gerar elementos aleatórios
  int size = 1 + rand()%101;//o tamanho do vetor sera entre 1 e 101
  int grades[size];
  for(size_t i = 0; i < size; i++){
    grades[i]= rand()%101;//numeros de 0 a 100 no vetor
  }
  printArray(grades, size);
  result = maximumValue(grades, size);
  printf("The maximum value in this array is %d\n", result);
  return 0;
}
