#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	char nome[15];
	float v1, v2, v3, v4, v5;
	float c1, c2, c3, c4, c5;
	float somav, somac;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("\nDigite o valor das 5 últimas vendas");
	printf("\n1ª venda: ");
	scanf("%f", &v1);
	printf("2ª venda: ");
	scanf("%f", &v2);
	printf("3ª venda: ");
	scanf("%f", &v3);
	printf("4ª venda: ");
	scanf("%f", &v4);
	printf("5ª venda: ");
	scanf("%f", &v5);
	
	if(v1 > 4000){
		c1 = v1 * 0.06;
	}else{
		c1 = v1 * 0.05;
	}
	if(v2 > 4000){
		c2 = v2 * 0.06;
	}else{
		c2 = v2 * 0.05;
	}
	if(v3 > 4000){
		c3 = v3 * 0.06;
	}else{
		c3 = v3 * 0.05;
	}
	if(v4 > 4000){
		c4 = v4 * 0.06;
	}else{
		c4 = v4 * 0.05;
	}
	if(v5 > 4000){
		c5 = v5 * 0.06;
	}else{
		c5 = v5 * 0.05;
	}
	
	somav = v1 + v2 + v3+ v4 + v5;
	somac = c1 + c2 + c3 + c4 + c5;
	
	printf("\n\nNome do vendedor: %s\n", nome);
	printf("\n\tVendas\t\tComissões");
	printf("\n1ª\tR$%.2f\tR$%.2f", v1, c1);
	printf("\n2ª\tR$%.2f\tR$%.2f", v2, c2);
	printf("\n3ª\tR$%.2f\tR$%.2f", v3, c3);
	printf("\n4ª\tR$%.2f\tR$%.2f", v4, c4);
	printf("\n5ª\tR$%.2f\tR$%.2f", v5, c5);
	printf("\n\nSoma\tR$%.2f\tR$%.2f", somav, somac);
	
	return 0;
}
