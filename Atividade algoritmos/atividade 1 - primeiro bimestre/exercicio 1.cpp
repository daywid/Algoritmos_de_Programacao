//exercício 1: salário de funcionário.

#include <stdio.h>
#include <math.h>


float salario, aumento, impostos, salario_inicial, salario_aumento, salario_final, salario_pos_aumento, salario_impostos;

main(){

printf("insira o salario do funcionario:  \n");
scanf("%f",&salario_inicial);

if (salario_inicial < 2000)
{
    salario_aumento = salario_inicial*0.115;
    salario_pos_aumento = salario_aumento + salario_inicial;

    impostos= salario_aumento*0.08;

    salario_impostos = salario_pos_aumento-impostos;

printf("\n salario inicial: \n %2.f \n",salario_inicial);

printf("\n salario com aumento: \n %2.f \n",salario_pos_aumento);

printf("\n salario final com impostos descontados: \n %2.f \n", salario_impostos);
    
}

if(salario_inicial >= 2000){

printf("\n o salario do funcionario nao sofreu alteracoes, continuando: \n %2.f \n \n", salario_inicial);  

}
 
}