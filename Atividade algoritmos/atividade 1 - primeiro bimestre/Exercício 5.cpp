// Exercicio 5

#include <stdio.h>
#include <locale.h>	
#include <math.h>
#include <stdlib.h>

int opcao_prato, opcao_bebida, opcao_sobremesa;
float total, prato_principal, bebida, sobremesa;

main(void){
	setlocale(LC_ALL, "Portuguese");
	printf("################################## \n");
	printf("Selecione sua opcao de prato: \n");
	printf("1 - Prato vegetariano \n");
    printf("2 - Prato de Peixe \n");
    printf("3 - Prato de frango \n");
    printf("4 - Prato de carne \n");
	scanf("%i",&opcao_prato);
	
	
	switch(opcao_prato){
		case 1:
			prato_principal = 180;
			break;
			
			case 2:
				prato_principal = 230;
				break;
				
				case 3:
					prato_principal = 250;
					break;
					
					case 4:
						
						prato_principal = 350;
						break;
						
						default:
							printf("Opcao invalida. \n");
							break;
	}
	
	
	printf("Selecione sua bebida: \n");
    printf("1 - Cha \n");
    printf("2 - Suco de Laranja \n");
    printf("3 - Suco de Melao \n");
    printf("4 - Refrigerante Diet \n");

	scanf("%i",&opcao_bebida);
	switch(opcao_bebida){
		case 1: 
		bebida = 20;
		break;
		
			case 2:
				bebida = 70;
				break;

				case 3:
					bebida = 100;
					break;

					case 4:
						bebida = 65;
						break;
						
						default:
							printf("Opcao invalida. \n");
							break;
	}
	printf("Selecione sua sobremesa: \n");
    printf("1 - Abacaxi \n");
    printf("2 - Sorvete Diet \n");
    printf("3 - Mousse diet \n");
    printf("4 - Mousse de Chocolate \n");

	scanf("%i",&opcao_sobremesa);
	switch(opcao_sobremesa){
		case 1:
			sobremesa = 75;
			break;
			
			case 2: 
			sobremesa = 110;
			break;
			
			case 3:
				sobremesa = 170;
				break;
				
				case 4:
					
					sobremesa = 200;
					break;
					
					default:
							printf("Opcao invalida. \n");
							break;
							}

	
	system("cls");
	
	total = (prato_principal + sobremesa + bebida);
	
	printf("O total de calorias e de: %.f",total);
	

	
}
