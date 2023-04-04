#include <stdio.h>

int opcao_voto,joao=0,jose=0,juca=0,nulo=0,populacao=4;


main(){


printf("Selecione sua opcao de voto: \n");
	printf("11 - Joao da Silva \n");
    printf("22 - Jose da Silva \n");
    printf("33 - Juca da Silva \n");
    printf("0 - Nulo \n");
	scanf("%i",&opcao_voto);


switch (opcao_voto)
{
case 11:
    joao++;
    populacao--;
    break;
case 22:
    jose++;
    populacao--;
    break;
case 33:
    juca++,
    populacao--;
    break;

default:
    nulo++;
    populacao--;
    break;
}

while (populacao>0);






}