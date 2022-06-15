//if 2^p -1 is prime then 2^(p−1)(2^p − 1) is a perfect number
// I need to modified for unsigned long long integer

#include <stdio.h>
#include <math.h>

unsigned int itsPrime(unsigned int p);
unsigned int perfectNumber(unsigned int p);

int main(void){
  unsigned int n;
  puts("Enter a positive integer(warning, this will be the exponent!): ");
  scanf("%u", &n);
  for(unsigned int j = n; j >= 2; j--){
    if(perfectNumber(j)!=0){
      printf("%u is a perfect number! \n", perfectNumber(j));
    }

  }

  return 0;
}

unsigned int itsPrime(unsigned int p){

  unsigned int number = pow(2, p) - 1;
  unsigned int max = sqrt(number);

  unsigned int sum = 0;

  for(int i=1; i<= max; i++){
    if(number%i==0){
      sum += i;
    }

  }
  if(sum == 1){
    return number;
	}
	else{
    return 0;
	}

}
unsigned int perfectNumber(unsigned int p){
  unsigned int a = itsPrime(p);
  if(a != 0){
    unsigned int n = pow(2, p-1)*(pow(2, p) -1);
    return n;
  }
}
