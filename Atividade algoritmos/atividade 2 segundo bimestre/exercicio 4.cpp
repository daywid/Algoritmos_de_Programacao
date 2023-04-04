//exercicio 4.
#include <stdio.h>

main(){
int superiores=0,inferiores=0;
int l,c,i,i2;
int valor_inferior=5,valor_final;

printf("\n Favor informar o numero de Linhas da matriz: \n");
scanf("%i",&i);

printf("\n Favor informar o numero de Colunas da matriz: \n");
scanf("%i",&i2);

float imoveis[i][i2];

printf("\n Digite os valores de uma matriz %i por %i: \n",i,i2);

for(l=0;l<i;l++)
for(c=0;c<i2;c++)
{
 scanf("%f",&imoveis[l][c]);

    if (imoveis[l][c]<5)
    {
        inferiores=inferiores+1;
    }
    if (imoveis[l][c]>=5){

        superiores=superiores+1;
    }
}
printf(" Inferiores: %i",inferiores);
printf("\n superiores : %i",superiores);

valor_final=(inferiores*1000)+(superiores*5000);
printf("\n O custo mensal desta regiao e: %i", valor_final);


}