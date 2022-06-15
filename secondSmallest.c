#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void secondSmallest(size_t* arr, size_t size, size_t *resultPtr){
  size_t smallest, second;
  for(size_t j = 0; j < size; j++){
    if(j == 0){
      arr[j] = smallest;
    }
    else if(j == 1){
      if(arr[j] < smallest){
        second = smallest;
        smallest = arr[j];
      }
      else{
        second = arr[j];
      }
    }
    else{
      if(arr[j]< smallest){
        second = smallest;
        smallest = arr[j];
      }
      else if((arr[j]< second)&&(arr[j]> smallest)){
        second = arr[j];
      }
    }
  }
  *resultPtr = second;
}
void printArray(size_t* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%u] = %u\n", i, arr[i]);
  }
}


int main(void){
  srand(time(NULL));
  size_t size = 1 + rand()%100; //size random 1..100
  size_t array[size];
  size_t value;
  for(size_t i = 0; i < size; i++){
    value = rand()%1000001; //random 0..1000000
    array[i]= value;
  }
  size_t result;
  secondSmallest(array, size, &result);
  printArray(array, size);
  printf("\n\nThe second smallest in this array is %u\n\n", result);
  return 0;
}
