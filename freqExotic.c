#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void freqElements(int* arr, size_t size){
  size_t i, j, k;
  size_t leftFlag;
  size_t countValue;

  for(i = 0; i < size; i++){

    countValue = 1;
    leftFlag = 0;
    for(j=0; j< i; j++){
      if(arr[j]==arr[i]){
        leftFlag = 1;
        break;
      }
    }
    if(leftFlag == 1){
      continue;
    }
    for(j = i + 1; j < size; j++){
      if(arr[j]==arr[i]){
        countValue++;
      }
    }
    printf("%d appears %u times\n", arr[i], countValue);
  }
}

int main(void){
  srand(time(NULL));
  size_t size = 1 + rand()%1000; //size random 1..1000
  printf("The size is %u\n", size);
  int array[size];
  int value;
  for(size_t i = 0; i < size; i++){
    value = rand()%10; //random 0..9
    array[i]= value;
  }
  freqElements(array, size);
  return 0;
}
