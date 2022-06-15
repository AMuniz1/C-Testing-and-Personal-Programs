#include <stdio.h>
#include <stdlib.h>

int *adjustableRealloc(size_t *lenPtr){
    size_t lastIndex = 0, size = 2;
    int num;
    int *myArr = NULL;
    int *temp = NULL;
    printf("Enter an integer: \n");
    scanf("%d", &num);
    if(num == -1){
        *lenPtr = 0;
        return NULL;
    }
    else{
        temp = (int*)malloc(size*sizeof(int));
        if(!temp){
            return NULL;
        }
        myArr = temp;

    }
    while(num != -1){
        if(lastIndex == size){
            size = size * 2;
            temp = (int*)realloc(myArr, size*sizeof(int));
            if(!temp){
                return NULL;
            }
            myArr = temp;
        }
        myArr[lastIndex] = num;
        lastIndex = lastIndex + 1;
        printf("Enter an integer: \n");
        scanf("%d", &num);
    }
    temp = (int*)realloc(myArr, lastIndex*sizeof(int));
    if(!temp){
        return NULL;
    }
    else{
        myArr = temp;
    }
    *lenPtr = lastIndex;
    return myArr;

}
void printArray(int* arr, size_t size){
  for(size_t i = 0; i < size; i++){
    printf("array[%lu] = %d\n", i, arr[i]);
  }
}
int main(){
    size_t tamanho;
    int *array = adjustableRealloc(&tamanho);
    printArray(array, tamanho);
    return 0;
}