/*pedi os numeros ao usuario, somei os tres numeros e depois dividi por
tres para dar a medio*/
#include<stdio.h>
/*15- crie um algoritmo que some 3 números inteiro e depois calcule a média*/
int main(){
  int n1;
  int n2;
  int n3;
  int soma;
  float media;
  printf("insira o primeiro numero:");
  scanf("%d", &n1);
  printf("insira o segundo numero:");
  scanf("%d", &n2);
  printf("insira o terceiro numero:");
  scanf("%d", &n3);

  soma = n1 + n2 + n3;
  media = soma / 3.0;

  printf("soma: %d\n", soma);
  printf("media: %.2f\n", media);
  return(0);
}
