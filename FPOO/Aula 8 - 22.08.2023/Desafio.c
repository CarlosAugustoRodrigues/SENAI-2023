#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	char nome[20];
	float venda[5], comissao[5], somaV = 0, somaC = 0;
	int i;
	
	printf("Digite o nome do vendedor: ");
	gets(nome);
	printf("\nDigite o valor das últimas 5 vendas:\n");
	scanf("%f\n%f\n%f\n%f\n%f", &venda[0], &venda[1], &venda[2], &venda[3], &venda[4]);
	
	for(i = 0; i < 5; i++){
		if(venda[i] > 4000){
			comissao[i] = venda[i] * 0.06;
		}else{
			comissao[i] = venda[i] * 0.05;
		}
		somaV += venda[i];
		somaC += comissao[i];
	}
	
	printf("\n\nNome do vendedor: %s\n", nome);
	printf("\n\tVendas\t\tComissões");
	
	for(i = 0; i < 5; i++){
		printf("\n\tR$%.2f\tR$%.2f", venda[i], comissao[i]);
	}
	
	printf("\nSoma\tR$%.2f\tR$%.2f", somaV, somaC);
	
	return 0;
}
