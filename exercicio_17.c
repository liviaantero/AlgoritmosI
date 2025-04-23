/*pedi 5 números inteiros ao usuário, coloquei em um vetor e ordenei-os de
forma crescente usando um laço*/
#include<stdio.h>
/*17- crie um algoritmo que receba 5 números inteiros e retorne eles de forma ordenada e crescente*/
int main(){
  int numeros[5];
  int a;
  printf("insira o primeiro numero:");
  scanf("%d",&numeros[0]);
  printf("insira o segundo numero:");
  scanf("%d",&numeros[1]);
  printf("insira o terceiro numero:");
  scanf("%d",&numeros[2]);
  printf("insira o quarto numero:");
  scanf("%d",&numeros[3]);
  printf("insira o quinto numero:");
  scanf("%d",&numeros[4]);

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4 - i; j++){
      if(numeros[j] > numeros[j + 1]){
        a = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = a;
      }
    }
  }
  printf("os numeros em ordem crescente sao: ");
  for(int i = 0; i < 5; i++){
    printf("%d ", numeros[i]);
  }
  return(0);
}
