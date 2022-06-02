/* função swap que funciona porque usamos endereços das variaáveis
 * em vez de copiarmos o valor de a e b, copíamos o endereço delas*/
 #include <stdio.h>

 void swap(int *prtNum1, int *prtNum2);
 int main(void){
   int a = 5, b = 7;
   printf("a ANTES swap é : %d\n", a);
   printf("b ANTES swap é : %d\n", b);
   swap(&a,&b); //lembre-se que & é necessário quando uma operação recebe um ponteiro
   printf("a DEPOIS swap é : %d\n", a);
   printf("b DEPOIS swap é : %d\n", b);
   return 0;
 }
 void swap(int *ptrNum1, int *ptrNum2){
   int temp;
   temp = *ptrNum1;
   *ptrNum1 = *ptrNum2;
   *ptrNum2 = temp;
 }
