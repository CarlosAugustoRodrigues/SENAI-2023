#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int roupa;
	float preco;
	float desconto;
	
	printf(" Digite 1 para camisa\n----------------------\n Digite 2 para bermuda\n----------------------\n Digite 3 para cal�a\n----------------------\n ");
	scanf("%d", &roupa);
	
	switch(roupa){
		case 1:
			printf("\n\n Pe�a de Roupa: Camisa");
			printf("\n Digite o valor da camisa: ");
			scanf(" %f", &preco);
			desconto = preco * 0.20;
			printf("\n Desconto: %.2f", desconto);
			printf("\n Valor com desconto: %.2f", preco-desconto);
			break;
		case 2:
			printf("\n Pe�a de Roupa: Bermuda");
			printf("\n Digite o valor da bermuda: ");
			scanf(" %f", &preco);
			desconto = preco * 0.10;
			printf("\n Desconto: %.2f", desconto);
			printf("\n Valor com desconto: %.2f", preco-desconto);
			break;
		case 3:
			printf("\n Pe�a de Roupa: Cal�a");
			printf("\n Digite o valor da cal�a: ");
			scanf(" %f", &preco);
			desconto = preco * 0.15;
			printf("Desconto: %.2f", desconto);
			printf("\n Valor com desconto: %.2f", preco-desconto);
			break;
		default:
			printf("\n PRODUTO N�O ENCONTRATO");
	}
	
	return 0;
}
