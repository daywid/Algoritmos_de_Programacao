//exercicio 2: idade e peso.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int a,idade=0,idade1=0,idade2=0,idade3=0,idade4=0;

float peso,peso1=0,peso2=0,peso3=0,peso4=0,media1=0,media2=0,media3=0,media4=0;


main(){

	for(int a=0; a<=14; a++ ){
	
	printf("insira a idade da pessoa: \n");
	scanf("%i",&idade);
	
	printf("insira o peso da pessoa: \n");
	scanf("%f",&peso);

	if(idade>=1 && idade<=11){
		idade1++;
		peso1=peso1+peso;
	}
    else if(idade>11 && idade<=20){
		idade2++;
		peso2=peso2+peso;
	}
    else if(idade>21 && idade<=30){
        idade3++;
        peso3=peso3+peso;
       
    }
    else if(idade>30){
        idade4++;
        peso4=peso4+peso;

    }
}
media1 = peso1/idade1;
media2 = peso2/idade2;
media3 = peso3/idade3;
media4 = peso4/idade4;

	printf("A media de peso por faixa etaria de 1 a 10 anos eh: %.2f\n", media1);
	printf("A media do peso por faixa etaria de 11 a 20 anos eh: %2.f\n",media2);
	printf("A media do peso por faixa etaria de 21 a 30 anos eh: %2.f\n",media3);
	printf("A media do peso por faixa etaria de mais de 30 anos eh: %2.f\n",media4);
    
	
    
    
}