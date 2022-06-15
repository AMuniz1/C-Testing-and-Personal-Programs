/*algoritmo para obter a soma da série (somatório)1/N. Exercício 2 da Apostila
da Unidade 3: (essa série diverge, ou seja, em termos leigos, ela tende a infinito)
Para os seres humanos, trabalhar com séries numéricas sem o auxílio de
ferramentas computacionais pode ser um grande transtorno. Assim sendo,
construa um programa que leia o número de termos da série e imprima
o valor de S.*/
#include <stdio.h>

int main(void){
  long double max_valor; // maximo valor da série %Lf
  long double somatorio = 0.0; // somatorio ou o valor S descrito acima %Lf
  printf("\n\nEntre com o valor máximo da série: \n");
  scanf("%Lf", &max_valor);
  long double n = 1;
  while(n <= max_valor){
    somatorio = somatorio + (1/n); //adiciona 1/n em somatório
    n++; // incrementa n
  }
  //imprime o valor do somatorio
  printf("\n\nO valor da série com %.0Lf termos = %.2Lf", max_valor, somatorio);
  return 0;
}
