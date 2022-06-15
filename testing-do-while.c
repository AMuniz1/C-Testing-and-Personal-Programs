#include <stdio.h>
#include <ctype.h>
//testing do while
int main(int argc, char const *argv[]) {
  unsigned long int N, counter, soma;
  int flag;
  char c, d;

  do{
    do{
      flag = 0;
      printf("Enter a number: \n" );
      scanf("%lu", &N);
      if((N < 0)){
        flag = 1;
      }
    }while(flag);
    soma = 0;
    for (counter = 1; counter <= N; counter++) {
      soma = soma + counter;
    }
    printf("The required sum is: %lu\n", soma);
    printf("You want to continue?(y/n)\n");
    scanf(" %c", &c);//se não acrescentar esse espaço, o programa não espera a entrada do usuário
    //e o programa se encerra
    d = tolower(c);
  }while((d=='y'));

  return 0;
}
