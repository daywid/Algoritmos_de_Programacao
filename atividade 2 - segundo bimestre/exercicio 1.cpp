//exercicio 1.
#include <stdio.h>

main(){
int i;
float dias,mediaMes=0,temperaturaInferior=0,total=0;
float temp[30];

for(i=1;i<=30;i++){
printf("\n Digite a temperatura do dia %i:", i);
scanf("%f",&temp[i]);
}
for(i=1;i<=30;i++){
    total=temp[i]+total;
}

mediaMes=total/30;

for(i=0;i<30;i++){
if (temp[i] < mediaMes ){
    dias++;
}
}
for (i = 1;i<=30; i++){
printf("\n A temperatura do dia %i foi de: %.2f",i,temp[i]);
}
printf("\n A temperatura media do mes de setembro foi de: %.2f",mediaMes);
printf("\n O numero de dias nos quais a temperatura foi inferior a temperatura media do mes e: %.2f",dias);

}