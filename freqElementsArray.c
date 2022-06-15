#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void freqElements(int* arr, size_t size){
  int freqArray[10] = {0};
  int freq;
  for(size_t j = 0; j < size; j++){
    freq = arr[j];
    ++freqArray[freq];
  }
  for(size_t i = 0; i < 10; i++){
    printf("Frequency of #%d : %d\n", i, freqArray[i]);
  }

}

int main(void){
  srand(time(NULL));

  size_t size = 1 + rand()%100; //size random 1..100
  int array[size];
  int value;
  for(size_t i = 0; i < size; i++){
    value = rand()%10; //random 0..9
    array[i]= value;
  }
  freqElements(array, size);
  return 0;
}
