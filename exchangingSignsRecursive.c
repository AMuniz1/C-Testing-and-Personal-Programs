#include <stdio.h>
void inputArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("\nEnter the value #%u: ", i+1);
    scanf("%d", &arr[i]);
  }
}
void printArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%u] = %d\t", i, arr[i]);
  }
}
size_t sizeArray(){
  size_t size;
  printf("Enter the size of the array: \n");
  scanf("%u", &size);

  return size;
}
int isChangingSigns(int *arr, size_t size){
  if(size<=1){
    return 1;
  }
  //arr[0]*arr[1]>0 is more elegant
  if(((arr[0]>0)&&(arr[1]>0))||((arr[0]<0)&&(arr[size-1]<0))){
    return 0;
  }
  else{
    return isChangingSigns(arr+1, size-1);
  }
}

int main(int argc, char const *argv[]) {
  size_t len = sizeArray();
  int array[len];
  inputArray(array, len);
  printArray(array, len);
  int flag = isChangingSigns(array, len);
  if(flag == 0){
    printf("\nArray is not exchanging signs.\n");
  }
  else{
    printf("\nArray is exchanging signs.\n");
  }
  return 0;
}
