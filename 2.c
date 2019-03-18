//exercício 2 - lp1
//Danielle Branco
//17/03/2019

#include <stdio.h>

int main (void){

  int num1,num2;

  printf("Escreva o primeiro numero: \n");
  scanf("%d",&num1);

  printf("Escreva o segundo numero: \n");
  scanf("%d",&num2);

  if (num1>num2){
    printf("Numero maior: %d\n", num1);
    printf("Numero menor: %d\n", num2);
} else {
    printf("Numero maior: %d\n", num2);
    printf("Numero menor: %d\b", num1);
} 
return 0;
}

