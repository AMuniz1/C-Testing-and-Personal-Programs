/*
A list (1..100000)
 */
#include <stdio.h>
#include <math.h>

#define SIZE 100000

int status[SIZE];

void sieve(){
  size_t i, j, squareRoot;
  for(i= 0; i<= SIZE; i++){
    status[i] = 0;
  }

  squareRoot = sqrt(SIZE);
  for(i = 4; i <= SIZE; i+=2){
    status[i] = 1;
  }
  for(i = 3; i<= squareRoot; i+=2){
    if(status[i]==0){
      for(j=2*i; j<=SIZE; j+=i){
        status[j] = 1;
      }
    }
  }
  status[1] = 1;
}

int main(void){
  int i, intN;
  sieve();
  do{
    printf("Enter the number (1 <= N <= 100000): \n");
    scanf("%d", &intN);
  }while((intN< 1)|| (intN > 100000));

  printf("Following numbers are prime in the range:\n\t\t 1 to %d: \n", intN);
  for(i = 1; i < intN; i++){
    if(status[i]== 0){
      printf("%d\n", i);
    }
  }
  printf("\n\tThanks!\n");

  return 0;
}
