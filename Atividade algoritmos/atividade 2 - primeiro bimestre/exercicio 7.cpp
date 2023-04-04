#include <stdio.h>

int idade;

main(){

	printf("\n insira um palpite: \n ");
	scanf("%i",&idade);
	
	while(idade!=37){
		
		
			if(idade<37){
		printf("\n muito baixo ");
		break;
	}

			else if(idade>37){
		printf("\n muito alto");
		break;
	}
}
	if(idade==37){
			
			printf("\n voce acertou!");
		}

}
 
