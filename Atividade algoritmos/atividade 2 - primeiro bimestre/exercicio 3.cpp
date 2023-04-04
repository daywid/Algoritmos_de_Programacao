#include <stdio.h>

int habitantes,filhos,resposta;

float salario=0,maior_salario,media_filhos,media_salario,porcentagem_salarios,pessoas_salarios;


main(){
	habitantes=0;
	printf("voce deseja cadastrar uma nova familia?\n1:Sim\n2:Nao \n");
	scanf("%i",&resposta);
	 
	 while(resposta<2){
		
	printf("\n insira salario: \n");
	scanf("%f",&salario);
	
	printf("\n insira numero de filhos:  \n");
	scanf("%i",&filhos);
		
		habitantes=habitantes+1;
		
		if(salario>maior_salario){
		maior_salario=salario;
		
		if(salario<=1500){
			pessoas_salarios++;
			
		}
	}
	
			
	
	printf("voce deseja cadastrar uma nova familia?\n1:Sim\n2:Nao \n");
	scanf("%i",&resposta);
		
		
	}
	media_salario=salario/habitantes;
	media_filhos=filhos/habitantes;
	porcentagem_salarios = ((pessoas_salarios/habitantes)/100)*0.1;
	
	printf("\n o maior salario eh:  %.2f ",maior_salario);
	printf("\n a media do salario da populacao eh:  %.2f ",media_salario);
	printf("\n a porcentagem de pessoas com salarios ate 1500 e:  %f",porcentagem_salarios);
	printf("\n a media de filhos da populacao eh:  %i",filhos);
	
	
	
	
}
