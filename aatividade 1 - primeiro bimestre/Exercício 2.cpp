// Exercicio 2 

#include <stdio.h>
#include <math.h>
#include <locale.h>

int n1, real;

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um numero: \n");
	scanf("%i",&n1);
	
	if(n1>0){
if(n1%2==0){
printf("O numero e par.");
}else{printf("O numero e impar.");}
}

if(n1<0){
	real = (-n1);
	printf("O valor absoluto do numero e: %i",real);
}
}
	
	

