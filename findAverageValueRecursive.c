#include <stdio.h>

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
size_t sizeArray(){
  size_t size;
  printf("Enter the size of the array: \n");
  scanf("%u", &size);

  return size;
}
double findAverageValue(int *arr, size_t size){
  double averageSoFar;
  if(size == 1){
    return (double)arr[0];
  }
  averageSoFar = findAverageValue(arr+1, size-1);
  return (((averageSoFar)*(size-1) + arr[0])/(size));

}
int main(void){
  size_t len = sizeArray();
  int array[len];
  inputArray(array, len);
  printArray(array, len);
  double average = findAverageValue(array, len);
  printf("The average value is %lf\n", average);
  return 0;
}
