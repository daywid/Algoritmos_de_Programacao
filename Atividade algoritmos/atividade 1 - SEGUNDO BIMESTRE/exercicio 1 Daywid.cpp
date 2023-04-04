//exercicio 1: Consórcio.
#include <stdio.h>

float conta(float pt, float pp, float va){

float total, devendos;
    total=va * pp;
    devendos = (pt * va) - total;
    return(devendos);
}

main(){

float valor_atual, total, devendo, prestacoes_total, prestacoes_pagas;

printf("\n digite o numero total de prestacoes: \n");
scanf("%f",&prestacoes_total);

printf("\n digite o numero de prestacoes pagas: \n");
scanf("%f",&prestacoes_pagas);

printf("\n digite o valor atual das prestacoes: \n ");
scanf("%f",&valor_atual);

devendo = conta(prestacoes_total,prestacoes_pagas,valor_atual);
printf("\n Seu saldo devedor eh: \n %.2f", devendo);

}
