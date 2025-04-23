/*eu pedi os numeros ao usuario e fiz o calculo que foi pedido no exercicio, depois mostrei o resultado*/
#include<stdio.h>
/*11- faça um algoritmo que insira dois números e que a divisão deles de um
resultado que seja obrigatóriamente um número inteiro*/
int main(){
  int a;
  int b;
  int r;
  printf("insira o primeiro numero:");
  scanf("%d",&a);
  printf("insira o segundo numero:");
  scanf("%d",&b);
  r = a / b;
  printf("resultado:%d",r);
  return(0);
}

