#include <stdio.h>

int main(void){
  int n1,n2;
  int *p;

  printf("Numero 1:");
  scanf("%d",&n1);

  printf("Numero 2:");
  scanf("%d",&n2);

  printf("Antes da subtração:%d\n %d\n",n1,n2);

  if (n1>n2)
  {
     p=&n1;
  }
  else
  {
     p=&n2;
  }

  *p=(*p-50);

  printf("Após a subtração:\n%d\n %d\n",n1,n2);



return 0;
}
