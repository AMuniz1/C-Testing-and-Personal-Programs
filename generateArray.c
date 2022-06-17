#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void printArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%u] = %d\t", i, arr[i]);
  }
  puts("");
}
int *generateArray(){
  int *myArr;
  myArr = (int*)malloc(SIZE*sizeof(int));

  if(!myArr){
    printf("The allocation failed... check your memory.\n");
    exit(1);
  }

  printf("Enter %d elements: \n", SIZE);
  for(size_t i = 0; i < SIZE; i++){
    printf("#%lu: ", i+1);
    scanf("%d", &myArr[i]);
  }

  return myArr;
}

int main(int argc, char const *argv[]) {
  int *arr;
  arr = generateArray();
  printArray(arr, SIZE);
  return 0;
}
