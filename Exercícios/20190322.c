#include <stdio.h>

int main (void){

    char i,j,temp,temps[50],soma,media;
    soma=0;
    media=0;
    
   
    for(i=0;i<=49;i++){
        //variável de controle, i, começa com 1 e vai até 50
        //i++ é o incremento
        printf("Temperatura:");
        scanf("%c",&temp);
        temps[i] = temp;
        soma=soma+temps[i];  
    }
    media = soma/50;
    
    for (i=0;i<=49;i++){
        if(temps[i]>media){
            j=j+1;
        }    
    }
    printf ("Quantidade %c\n",j);

return 0;
}
