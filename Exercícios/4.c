//exercício 4 - lp1
//Danielle Branco
//17/03/2019

#include <stdio.h>

int main (void){

  float mph;

  printf ("Qual sua velocidade atual(mph)?\n");
  scanf("%f",&mph);
  
  if ((mph*1.6>=80) && (mph*1.6<=100)) {
    printf("MANTENHA\n");

} else if (mph*1.6<80) {
    printf("ACELERE\n");

} else if (mph*1.6>100) {
    printf("DESACELERE\n");
}

return 0; 

}
