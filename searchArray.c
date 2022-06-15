//search if an element is in an array using recursion
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int searchArray(const int arr[], size_t size, int element){
  int n = size;
  --n;

  if(n<0){
    return 0;
  }
  else if(arr[n]==element){
    return 1;
  }
  else{
    return searchArray(arr, n, element);
  }
}
void printArray(int arr[], size_t size){
  for(size_t i = 0; i < size; i++){
    printf("grades[%u] = %d\n", i, arr[i]);
  }
}
int main(void){

  int searchKey;
  int result;
  srand(time(NULL)); //semente para gerar elementos aleatórios
  int size = 1 + rand()%101;//o tamanho do vetor sera entre 1 e 101
  int grades[size];
  for(size_t i = 0; i < size; i++){
    grades[i]= rand()%101;//numeros de 0 a 100 no vetor
  }
  printArray(grades, size);
  printf("Qual número quer checar? \n");
  scanf("%u", &searchKey);

  result = searchArray(grades, size, searchKey);
  if(result == 1){
    printf("%u was found!\n", searchKey);
  }
  else{
    printf("Value not found.\n");
  }


  return 0;
}
