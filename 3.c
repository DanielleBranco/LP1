//exercício 3 - lp1
//Danielle Branco
//17/03/2019

#include <stdio.h>

int main (void){

  float valor;

  printf("Qual o valor do aparelho ($)?\n");
  scanf("%f",&valor);

  if (valor*3.17 < 1000){
    printf ("Bom negócio\n");

} else {
    printf("Procure um aparelho mais barato!!\n");
}

return 0;
}

