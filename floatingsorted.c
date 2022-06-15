#include <stdio.h>

void inputArray(double* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("\nEnter the value #%u: ", i+1);
    scanf("%lf", &arr[i]);
  }
}
void printArray(double* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%u] = %lf\n", i, arr[i]);
  }
}
size_t sizeArray(){
  size_t size;
  printf("Enter the size of the array: \n");
  scanf("%u", &size);

  return size;
}
/* this function is not working properly,
 * not returning 1 when the conditions met
int isFloatingArraySortedIterative(double *arr, size_t size){
  int integerPart1;
  int integerPart2;
  double fracionaryPart1;
  double fracionaryPart2;
  int flag = 0;
  for(size_t i = 0; i < size; i++){
    integerPart1 = (int)arr[i];
    fracionaryPart1 = arr[i] - integerPart1;
    if(i<=size-1){
      integerPart2 = (int)arr[i+1];
      fracionaryPart2 = arr[i+1]-integerPart2;
      if(arr[i+1]< arr[i]){
        return 0;
        flag = 1;
      }
      else if (fracionaryPart2> fracionaryPart1){
        return 0;
        flag = 1;
      }
    }
  }
  if(flag == 0){
    return 1;
  }

}
*/
int isFloatingArraySortedRecursive(double* arr, size_t size){
  if(size == 1){
    return 1;
  }
  if((int)arr[0] <= (int)arr[1] && (arr[0]-(int)arr[0]) >= (arr[1]-(int)arr[1])){
    return isFloatingArraySortedRecursive(arr+1, size-1);
  }
  else{
    return 0;
  }
}
int main(void){
  size_t len = sizeArray();
  double array[len];
  inputArray(array, len);
  printArray(array, len);
  int result = isFloatingArraySortedRecursive(array, len);
  printf("Result = %d\n", result);
  return 0;
}
