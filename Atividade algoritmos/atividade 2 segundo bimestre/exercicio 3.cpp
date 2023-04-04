//exercicio 3.
#include <stdio.h>

main(){
int i;
float total_semana;  
float total_dia,quantPao[7];

for(i=0;i<7;i++){
printf("\n Digite a quantidade de paes do dia %i:", i+1);
scanf("%f",&quantPao[i]);
}

for(i=0;i<7;i++){
    total_dia=quantPao[i]*1.35;

    printf("\n O total arrecadado no %i dia foi de: %.2f",i+1,total_dia);
    total_semana=total_dia+total_semana;
}

printf("\n O total arrecadado na semana foi de: %.2f",total_semana);

//cada Pão Francês pesa em média 30g e o quilo
//do pão custa R$45,00. 
//portanto, cada pao custa 1,35.
}
