/*pedi ao usuário uma vogal e verifiquei a para exibir a resposta
correta*/
#include<stdio.h>
/*18- crie um algoritmo que responda o usuário quando ele digitar a vogal “o” com a vogal “e”*/
int main(){
  char vogal;
  printf("insira uma vogal:");
  scanf("%c",&vogal);
  if(vogal == 'o' || vogal == 'O'){
    printf("você digitou a vogal 'o', agora digite a vogal 'e'\n");
  }
  if(vogal == 'e' || vogal == 'E'){
    printf("você digitou a vogal 'e'!\n");
  }
  else{
    printf("você não digitou 'o' nem 'e'.\n");
  }
  return(0);
}
