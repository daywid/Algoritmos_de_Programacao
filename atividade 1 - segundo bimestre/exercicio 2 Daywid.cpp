//exercicio 2: INSS.
#include <stdio.h>

float conta1(float salario){
float porcent;
porcent= 0.075 * salario;
return(porcent);
}

float conta2(float salario){
float porcent;
porcent= 0.9 * salario;
return(porcent);
}

float conta3(float salario){
float porcent;
porcent = 0.12 * salario;
return(porcent);
}

float conta4(float salario){
float porcent;
porcent = 0.14 * salario;
return(porcent);
}

main(){

float salario, inss;

printf("insira o seu salario: \n");
scanf("%f",&salario);

if (salario<=1212.00)
{
    inss=conta1(salario);
    printf("\n O valor do INSS a ser pago eh: %.2f \n",inss);
}

if (salario>=1212.01 && salario <= 2427.35)
{
    inss=conta2(salario);
    printf("\n O valor do INSS a ser pago eh: %.2f \n",inss);
}

if (salario>= 2427.36 && salario <= 3641.03)
{
    inss=conta3(salario);
    printf("\n O valor do INSS a ser pago eh: %.2f \n",inss);
}

if (salario>= 3641.04)
{
    inss=conta4(salario);
    printf("\n O valor do INSS a ser pago eh: %.2f \n",inss);
}
}