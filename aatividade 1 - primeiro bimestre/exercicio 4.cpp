#include <stdio.h>
#include <math.h>
float valorcompra, valorvenda, lucro;


main(){

printf("\n LOJINHA DO SR. ABOO,\n digite o valor da compra:  \n");
scanf("%f",&valorcompra);

if(valorcompra < 10.00){
	
	
	lucro = 0.7*valorcompra;
	valorvenda = (lucro + valorcompra);
	printf("PORCENTAGEM DO LUCRO: 70%%\n");
	printf("VALOR DA VENDA: %2.f",valorvenda);
	
	return 0;
	

}

else if(valorcompra >= 10.00 && valorcompra < 30.00){
	
	lucro = 0.5*valorcompra;
	valorvenda = lucro + valorcompra;
	printf("PORCENTAGEM DO LUCRO: 50%%\n");
	printf("VALOR DA VENDA: %2.f",valorvenda);
	
return 0;
}

else if(valorcompra >= 30.00 && valorcompra < 50.00){
	
	lucro = 0.4*valorcompra;
	valorvenda = lucro + valorcompra;
	printf("PORCENTAGEM DO LUCRO: 40%%\n");
	printf("VALOR DA VENDA: %2.f",valorvenda);
	return 0;
}

else if(valorcompra > 50.00){

	lucro = 0.4*valorcompra;
	valorvenda = lucro + valorcompra;
	printf("PORCENTAGEM DO LUCRO: 30%%\n");
	printf("VALOR DA VENDA: %2.f",valorvenda);
	
return 0;
}

}
