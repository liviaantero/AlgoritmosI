/*pedi as 3 dimensões do objeto ao usuário em metros e armazenei cada uma*/
#include<stdio.h>
/*16- crie um algoritmo que tenha como entrada as 3 dimensões de um objeto em metros*/
int main(){
  float comprimento;
  float largura;
  float altura;
  printf("insira o comprimento:");
  scanf("%f", &comprimento);
  printf("insira a largura:");
  scanf("%f", &largura);
  printf("insira a altura:");
  scanf("%f", &altura);
  printf("as dimensoes informadas foram:\n");
  printf("comprimento: %.2f\n", comprimento);
  printf("largura: %.2f\n", largura);
  printf("altura: %.2f\n", altura);
  return(0);
}
