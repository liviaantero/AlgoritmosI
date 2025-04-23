/*como pedia no exercicio eu coletei todas as datas e calculei para saber quantos meses de vida o usuario tem*/
#include<stdio.h>
/*13- faça um algoritmo que colete a data de nascimento do usuário que
devolva a sua idade em meses*/
int main(){
  int dia;
  int idade;
  int mes, meses;
  int ano, anos;
  int diaatual;
  int mesA;
  int anoA;
  printf("Digite o dia do seu nascimento:");
  scanf("%d", &dia);
  printf("Digite o mes do seu nascimento:");
  scanf("%d", &mes);
  printf("Digite o ano do seu nascimento:");
  scanf("%d", &ano);
  printf("Digite o dia atual:");
  scanf("%d", &diaatual);
  printf("Digite o mes atual:");
  scanf("%d", &mesA);
  printf("Digite o ano atual:");
  scanf("%d", &anoA);

  anos = anoA - ano;
  meses = mesA - mes;

  if ((meses < 0) || (meses == 0) && (diaAtual < diaNasc)) {
      anos--;
      meses += 12;
    }
  idade = anos * 12 + meses;
  printf("Sua idade em meses e:%d\n", idade);
  return 0;
}
