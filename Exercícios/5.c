//exercício 5 - lp1
//Danielle Branco
//17/03/2019


#include <stdio.h>

int main (void){

  int num,soma;
  soma = 0;

  printf("Número(s): \n");
  scanf("%d",&num);

  while (num!=0){
  soma = soma + num;

  //printf("Digite um número: \n");
  scanf("%d",&num);

}

 

  printf("A soma é: %d\n",soma);


return 0;
}
