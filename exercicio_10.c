/*fiz o cardapio e pedi para o usuario entrar com o numero que corresponde a comida ou bebida*/
#include<stdio.h>
/*10- faça um cardápio que apareça no terminal por meio do printf com no mínimo 5 escolhas,
e faça a opção de escolha das opções*/
int main(){
  int a;
  printf("            comidas           \n ");
  printf("1- pastel\n");
  printf("2- bolo\n");
  printf("3- coxinha\n");
  printf("4- chocolate\n");
  printf("5- brigadeiro\n");
  printf("           bebidas           \n ");
  printf("6- coca cola\n");
  printf("7- café\n");
  printf("8- energético\n");
  printf("9- água\n");
  printf("10- água de coco\n");
  printf("\nEscolha uma opção (1 a 10): ");
  scanf("%d", &a);
  switch(a) {
      case 1:
          printf("Você escolheu:Pastel\n");
          break;
      case 2:
          printf("Você escolheu:Bolo\n");
          break;
      case 3:
          printf("Você escolheu:Coxinha\n");
          break;
      case 4:
          printf("Você escolheu:Chocolate\n");
          break;
      case 5:
          printf("Você escolheu:Brigadeiro\n");
          break;
      case 6:
          printf("Você escolheu:Coca-Cola\n");
          break;
      case 7:
          printf("Você escolheu:Café\n");
          break;
      case 8:
          printf("Você escolheu:Energético\n");
          break;
      case 9:
          printf("Você escolheu:Água\n");
          break;
      case 10:
          printf("Você escolheu:Água de Coco\n");
          break;
      default:
          printf("opção inválida, escolha um número de 1 a 10.\n");
          break;
    }
  return 0;
}
