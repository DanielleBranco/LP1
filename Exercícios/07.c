//exerc�cio 7 - lp1
//Danielle Branco
//17/03/2019

#include <stdio.h>
#include <string.h> 

int main (void){
  int n,e,d,v,soma,maior,menor;

  char time[30],mais[100],menos[100];
  soma=0;
  n=1;
  maior = -999999999;
  menor = 9999999999;


while (n<=3) {

  printf("Time:");
  scanf("%s",time);

  printf("Derrota: \n");
  scanf("%d",&d);

  printf("Vit�ria: \n");
  scanf("%d",&v);

  printf("Empate: \n");
  scanf("%d",&e);

    if (v!=0){
      soma = v*3;
  } else if (e!=0){
      soma=soma+e;
  }
   
   printf("Total %s",time);
   printf(": %d\n\n",soma);
    
    if (soma>maior){
	  maior = soma; 
      //fun��o de substitui��o de strings (destino,origem)
      strcpy (mais,time); 
  } else if (soma<menor) {
  	  menor = soma;
      strcpy (menos,time);
  } 
    soma=0;
    n=n+1;
}
  printf("Time com menos pontos: %s\n",menos);

  printf("Time com mais pontos: %s\n",mais); 
  

return 0;
} 