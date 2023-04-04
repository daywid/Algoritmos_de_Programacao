//Exercicio 1: Placa de veículo.
#include <stdio.h>

main(){

int digito_placa, mes, ultimo_digito, sobra;

printf("DIGITE OS QUATRO DIGITOS DA PLACA DO VEICULO: \n \n ");
scanf("%i",&digito_placa);

mes = digito_placa%10;


if (mes==1)
{
    printf("\n MES DO PAGAMENTO DO IPVA: JANEIRO \n");
    return(0);
}
if (mes==2)
{
    printf("\n MES DO PAGAMENTO DO IPVA: FEVEREIRO \n");
    return(0);
}
if (mes==3)
{
    printf("\n MES DO PAGAMENTO DO IPVA: MARCO \n");
    return(0);
}
if (mes==4)
{
    printf("\n MES DO PAGAMENTO DO IPVA: ABRIL \n");
    return(0);
}
if (mes==5)
{
    printf("\n MES DO PAGAMENTO DO IPVA: MAIO \n");
    return(0);
}
if (mes==6)
{
    printf("\n MES DO PAGAMENTO DO IPVA: JUNHO \n");
    return(0);
}
if (mes==7)
{
    printf("\n MES DO PAGAMENTO DO IPVA: JULHO \n");
    return(0);
}
if (mes==8)
{
    printf("\n MES DO PAGAMENTO DO IPVA: AGOSTO \n");
    return(0);
}
if (mes==9)
{
    printf("\n MES DO PAGAMENTO: SETEMBRO \n");
    return(0);
}
if (mes==0)
{
    printf("\n MES DO PAGAMENTO: OUTUBRO \n");
    return(0);
}
}