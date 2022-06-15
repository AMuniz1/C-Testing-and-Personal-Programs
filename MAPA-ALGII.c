/*Estou fazendo este programa no Fedora Workstation 35, então acentos não é problema
Gostaria de implementar a saída dos dados em um txt, mas isso levaria mais tempo.
Fica para depois de fazer as atividades. Terminei esse programa no dia 19 de maio de 2022
Questão MAPA:
A vacinação contra o Covid-19 evoluiu muito no ano de 2021.
Para 2022 ao que tudo indica doses de reforço serão necessárias para controle da pandemia.
Com a ajuda da tecnologia, o controle de vacinas são todas digitalizadas,
inclusive a partir de um aplicativo você mesmo pode consultar as vacinas que você tomou.

Imagine então que você trabalha na área de desenvolvimento de software do seu estado,
e você foi designado para registrar os dados de aplicação das vacinas.
Nesta aplicação a pessoa responsável precisará pegar do paciente as informações como
nome, cpf, nome da vacina aplicada, número do lote e a data da aplicação.

Este programa deve ser capaz de cadastrar as informações de aplicação de vacina, que em resumo são:
    - Código (você fará o controle, não será digitado pelo usuário)
    - Nome
    - CPF
    - Vacina
    - Data (pode ser tratada como String)
    - Numero Lote

Logo após o cadastro o programa deverá disponibilizar outros dois recursos, um deles é um
relatório geral de aplicação, que trará todas as informações das aplicações em tela no seguinte modelo:
    Código: 0
    Nome: Rogerio Napoleao Júnior
    CPF: 111.111.111-11
    Vacina: Pfizer
    Data: 01/05/2022
    Numero do Lote: 123123123
    ==================================
    Código: 1
    Nome: Joao da Silva
    CPF: 111.111.111-11
    Vacina: Coronavac
    Data: 10/05/2022
    Numero do Lote: 333222333
    ==================================

O outro recurso necessário é busca por CPF, ao usuário digitar o CPF o programa
deve fazer uma buscar e mostrar em tela apenas o CPF consultado, caso não exista
uma informação “CPF não encontrado” deve ser mostrado na tela.

Para controlar este programa deverá ter um menu de opções como abaixo:
    1 - Cadastrar Vacina
    2 - Listar Aplicações
    3 - Consultar por CPF
    4 - Sair
Utilize os mais variados recursos aprendidos na disciplina.
Seja criativo, não se prenda a uma unica forma de resolver este problema.

Logo após envie o código em C.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50
#define LEN 15

struct aplica_vacina
{
  int codigo;
  char nome[SIZE];
  char cpf[LEN];
  char vacina[SIZE];
  char data[LEN];
  char lote[LEN];
};
int main(){
  struct aplica_vacina ficha[SIZE];
  char busca_cpf[LEN];
  int acha_cpf;
  int i, j,indice, cod;
  cod = 0;
  i = j = 0;
  while(cod != 4){
    printf("1 - Cadastrar Vacina\n");
    printf("2 - Listar Aplicações\n");
    printf("3 - Consultar por CPF\n");
    printf("4 - Sair\n");
    scanf("%d", &cod);
    getchar();
    fflush(stdin);
    i = j;

    if((cod == 1)&&(i <SIZE)){
      system("clear");
      ficha[i].codigo = i;
      fflush(stdin);
      printf("Entre o nome do paciente:\n");
      scanf("%[^\n]%*c", &ficha[i].nome);
      fflush(stdin);
      printf("Entre com o CPF do paciente (apenas números):\n");
      scanf("%[^\n]%*c", &ficha[i].cpf);
      fflush(stdin);
      printf("Entre com a vacina aplicada: \n");
      scanf("%[^\n]%*c", &ficha[i].vacina);
      fflush(stdin);
      printf("Entre a data que foi aplicada (formato: dd/mm/aaaa) \n");
      scanf("%[^\n]%*c", &ficha[i].data);
      fflush(stdin);
      printf("Entre com o número do lote da vacina\n");
      scanf("%[^\n]%*c", &ficha[i].lote);
      fflush(stdin);
      printf("Aplicação cadastrada com sucesso!\n");
      i++;
      j = i;
    }
    else if(cod == 2){
      system("clear");
      j = i;
      for(indice = 0; indice<j; indice++){
        printf("======================================\n");
        printf("Código: %d\n", ficha[indice].codigo);
        printf("Nome: %s\n", ficha[indice].nome);
        printf("CPF: %s\n", ficha[indice].cpf);
        printf("Vacina: %s\n", ficha[indice].vacina);
        printf("Data: %s\n", ficha[indice].data);
        printf("Lote: %s\n", ficha[indice].lote);
      }
      printf("Listagem imprimida com sucesso\n");
    }
    else if(cod == 3){
      system("clear");
      printf("Digite o CPF que deseja buscar(apenas números): \n");
      scanf("%[^\n]%*c", &busca_cpf);
      fflush(stdin);
      j = i;
      indice = 0;
      acha_cpf = 0;
      while((indice < j)&&(acha_cpf==0)){
        if(strcmp(ficha[indice].cpf, busca_cpf) == 0){
          acha_cpf = 1;
        }
        else{
          indice++;
        }
      }
      if(acha_cpf == 1){
        printf("CPF encontrado!\n");
        printf("======================================\n");
        printf("Código: %d\n", ficha[indice].codigo);
        printf("Nome: %s\n", ficha[indice].nome);
        printf("CPF: %s\n", ficha[indice].cpf);
        printf("Vacina: %s\n", ficha[indice].vacina);
        printf("Data: %s\n", ficha[indice].data);
        printf("Lote: %s\n", ficha[indice].lote);
      }
      else{
        printf("CPF não encontrado\n");
      }
    }
    else if(i>=SIZE){
      printf("Por favor, não há mais espaço para cadastrar uma aplicação de vacina.\n");
    }
  }
  return 0;
}
