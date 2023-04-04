//exercicio 2.
#include <stdio.h>

main(){
float carrostotal;
int i,maior=0,indicemaior=0;
float quantcarros[30];

for(i=1;i<=30;i++){
printf("\n Insira a quantidade de carros que passaram no dia %i \n ", i);
scanf("%f",&quantcarros[i]);
}
for (i = 1;i<=30; i++)
{
    carrostotal=quantcarros[i]+carrostotal;
}
for(i=0;i<30;i++){
if (maior < quantcarros[i] ){
    maior=quantcarros[i];
    indicemaior=i;
}
}
printf("\n O total de carros que passaram no guiche eh: %.2f",carrostotal);
printf("\n A maior quantidade de carros aconteceu no dia %i",indicemaior);

}