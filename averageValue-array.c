#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void averageValue(const int arr[], size_t size, int *ptrTotalSum,  double *ptrAverage){
  int total = 0;
  for(size_t index = 0; index < size; index++){
      total += arr[index];
  }
  *ptrTotalSum = total;
  *ptrAverage = (double) total/size;
}
void printArray(int arr[], size_t size){
  for(size_t i = 0; i < size; i++){
    printf("grades[%u] = %d\n", i, arr[i]);
  }
}
int main(void){
  double result;
  int sum;
  srand(time(NULL)); //semente para gerar elementos aleatórios
  int size = 1 + rand()%101;//o tamanho do vetor sera entre 1 e 101
  int grades[size];
  for(size_t i = 0; i < size; i++){
    grades[i]= rand()%101;//numeros de 0 a 100 no vetor
  }
  printArray(grades, size);
  averageValue(grades, size, &sum, &result);
  printf("The total sum is %d and size is %d\n", sum, size);
  printf("The average value in this array is %.2lf\n", result);
  return 0;
}
