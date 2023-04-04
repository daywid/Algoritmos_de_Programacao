//exercicio 3: Notas de aluno.
#include <stdio.h>


float calculo(){

float nota1,nota2,nota3,media;
int mediatipo;

printf("Insira a nota 1 do aluno: \n");
scanf("%f",&nota1);

printf("Insira a nota 2 do aluno: \n");
scanf("%f",&nota2);

printf("Insira a nota 3 do aluno: \n");
scanf("%f",&nota3);

printf("Insira o tipo de media a ser calculada:\n 1 - Aritmetica.\n 2 - Ponderada.\n 3 - Harmonica \n");
scanf("%i", &mediatipo);

if (mediatipo==1)
{
    media = (nota1+nota2+nota3)/3;
    printf("A media do aluno eh: \n %.2f",media);
    printf("\n \n media utilizada: Aritmetica! \n");
    return(0);
}
else if (mediatipo==2)
{
    media = (nota1*5 + nota2*3 + nota3*2)/(5+3+2);
    printf("A media do aluno eh: \n %.2f",media);
    printf("\n \n media utilizada: Ponderada! \n");
    return(0);
}   
else if (mediatipo==3)
{
    media = 3 / ((1 / nota1) + (1 / nota2) + (1 / nota3));
    printf("A media do aluno eh: \n %.2f",media);
    printf("\n \n media utilizada: Harmonica! \n");
    return(0);
}
else if (mediatipo>3)
{
    printf("\n INVALIDO!\n");
    return(0);
}
else if (mediatipo<1)
{
    printf("\n INVALIDO!\n");
    return(0);
}

}
main(){

calculo();
return(0);

}