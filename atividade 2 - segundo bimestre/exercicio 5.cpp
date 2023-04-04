//exercicio 5
#include <stdio.h>


main(){
int l,c;//,i,i2;
int tabela[4][12];
int total_outubro=0,total_ano=0,total_arruela=0;

for(l=0;l<4;l++)
for(c=0;c<12;c++)
{
    printf("\n Digite as vendas do produto %i no mes %i: \n",l+1,c+1);
    scanf("%i",&tabela[l][c]);
    total_ano=tabela[l][c]+total_ano;
}
for(l=0;l<4;l++)
{
    total_outubro=tabela[l][7]+total_outubro;
}

for(c=0;c<12;c++)
{
    total_arruela=tabela[2][c]+total_arruela;
}
printf("\n O total de vendas no ano foi de: %i",total_ano);
printf("\n O total de vendas do mes de outubro foi de: %i",total_outubro);
printf("\n O total de vendas de arruela (PRODUTO 3) foi de : %i",total_arruela);
}