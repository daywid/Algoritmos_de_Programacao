#include <stdio.h>

int numero,numero1,par=0,impar=0,maior_numero=0,menor_numero=10000,numeros_maiores;


main(){


printf("insira um numero: \n ");
scanf("%i",&numero1);

while(numero!=numero1/2){

printf("insira um numero: \n ");
scanf("%i",&numero);


if (numero % 2 == 0) {
  par++;
} 

if(numero>maior_numero){
		maior_numero=numero;
    numeros_maiores++;
}

if(numero<menor_numero){
        menor_numero=numero;
}




}

printf("\n a quantidade de numeros pares e: %i",par);
printf("\n a quantidade de numeros maiores que o primeiro numero digitado eh: %i",numeros_maiores);
printf("\n o maior valor inserido e: %i",maior_numero);
printf("\n o menor valor inserido e: %i",menor_numero);



}
