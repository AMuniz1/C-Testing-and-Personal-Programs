#include <stdio.h>
#include <stdlib.h>

int *criandoArraySemDuplicate(int *sourceArray, size_t size, size_t *newSize){
  int *myArr;
  size_t i, j= 0;
  size_t count = 1;
  for(i = 0; i < size-1; i++){
    if(sourceArray[i] != sourceArray[i+1]){
      count++;
    }
  }
  myArr = (int*)malloc(count*sizeof(int));
  for(i = 0; i<size-1; i++){
    if(sourceArray[i] != sourceArray[i+1] ){
      myArr[j++] = sourceArray[i];
    }

  }
  myArr[j++] = sourceArray[size-1];
  *newSize = count;
  return myArr;
}
size_t sizeArray(){
  size_t size;
  printf("Enter the size of the array: \n");
  scanf("%lu", &size);

  return size;
}
int main(int argc, char const *argv[]) {
  size_t len = sizeArray();
  int *array = (int*)malloc(len*sizeof(int));
  int hold;
  if(!array){
    printf("Something went wrong.\n");
    exit(1);
  }
  for(size_t i = 0; i < len; i++){
    printf("#%lu:\n", i+1);
    scanf("%d", &array[i]);
  }
  printf("\nArray without sorting:\n");
  for(size_t i = 0; i< len; i++){
    printf("array[%lu] = %d\t", i, array[i]);
  }
  puts("");
  for (size_t i = 0; i < len-1; i++){
    for (size_t j = 0; j < len-1; j++) {
      if(array[j]>array[j+1]){
        hold = array[j];
        array[j] = array[j+1];
        array[j+1] = hold;
      }
    }
  }
  printf("\nArray sorted:\n");
  for(size_t i = 0; i< len; i++){
    printf("array[%lu] = %d\t", i, array[i]);
  }
  puts("");
  size_t newArraySize;
  int *newArray= criandoArraySemDuplicate(array, len, &newArraySize);
  printf("\nNew array with no duplicate elements!\n");
  for(size_t i = 0; i< newArraySize; i++){
    printf("newArray[%lu] = %d\t", i, newArray[i]);
  }
  puts("");
  free(newArray);
  return 0;
}
