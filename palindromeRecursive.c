/*
A ideia é a seguinte: entrar com o tamanho do vetor e utilizar as funções básicas
de arrays.
*/
#include <stdio.h>

int howManyDigits(int number){
  int count = 0;
  while(number != 0){
    number = number/10;
    ++count;
  }
  return count;
}

void inputArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("\nEnter the value #%u(0..9): ", i+1);
    scanf("%d", &arr[i]);
    while(howManyDigits(arr[i])>1){
      printf("\nPlease enter only one digit integer: ");
      scanf("%d", &arr[i]);
    }
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
int isArrayAPalindrome(int *arr, size_t size){
  if(size <= 1){
    return 1;
  }
  if(arr[0] != arr[size-1]){
    return 0;
  }
  else{
    return isArrayAPalindrome(arr+1, size-2);
  }

}
int main(void){
  size_t len = sizeArray();
  int array[len];
  inputArray(array, len);//inicializa
  printArray(array, len);//imprime
  int flag = isArrayAPalindrome(array, len);
  if(flag == 0){
    printf("Array is not a palindrome.\n");
  }
  else{
    printf("Array is a palindrome.\n");
  }
  return 0;
}
