#include <stdio.h>

#define SIZE 7

void swap(char* ptr1, char* ptr2){
  char temp;
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}

void inputArray(char* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("\nEnter the value #%u: ", i+1);
    scanf(" %c", &arr[i]);
  }
}
void printArray(char* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%u] = %c\n", i, arr[i]);
  }
}

void reverseArrayInterative(char* arr, size_t size){
    for(size_t i = 0; i < size/2; i++){
      swap(&arr[i], &arr[size-1-i]);
    }
}
void reverseArrayRecursive(char* arr, size_t size){
  if (size > 1){
    swap(&arr[0], &arr[size-1]);
    reverseArrayRecursive(arr+1, size-2);//pointer arithmetic
  }
}

int main(int argc, char const *argv[]) {

  char array[SIZE-1];
  inputArray(array, SIZE-1);
  printf("Normal array: \n");
  printArray(array, SIZE-1);
  //reverseArrayInterative(array, SIZE-1);
  //printArray(array, SIZE-1);
  puts("");
  printf("Reversed array: \n");
  reverseArrayRecursive(array, SIZE-1);
  printArray(array, SIZE-1);



  return 0;
}
