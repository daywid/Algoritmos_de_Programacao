// Exercicio 3 

#include <stdio.h>
#include <math.h>
 
float salario, sb, sl, cinss, pagamento;

main(void){
	
	printf("Digite seu salario:  ");
		scanf("%f",&salario);
	
	printf("Digite o valor do emprestimo:  ");
		scanf("%f",&pagamento);
	
	cinss = (salario*0.09);
	sl = (salario-cinss);
	
	if(pagamento>=(sl*0.3)){
		printf("O emprestimo nao podera ser realizado.");
		
	}if(pagamento<sl*0.3){
		printf("O emprestimo podera ser realizado.");
}
}
