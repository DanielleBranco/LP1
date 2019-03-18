//exercício 6 - lp1
//Danielle Branco
//17/03/2019


#include <stdio.h>
#include <math.h>

int main (void){

  float res,i,n;
  res = 0;
  i =pow(1,2);

  printf("Número: \n");
  scanf("%f",&n);

  while (n<=100){
  res = (i*n)+res;

  n=n+1;
}
  printf("Resultado: %.f \n",res);
 
return 0;
}
