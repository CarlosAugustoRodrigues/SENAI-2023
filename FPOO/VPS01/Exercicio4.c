#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int numitens;
	
	printf("Digite o número de itens comprados: ");
	scanf("%d", &numitens);
	
	char nomeitens[numitens][20];
	float precoitens[numitens];
	int i;
	
	for(i = 0; i < numitens; i++){
		printf("\n%dº item", i + 1);
		printf("\nNome do item: ");
		scanf("%s", &nomeitens[i]);
		printf("Preço do item: ");
		scanf("%f", &precoitens[i]);
	}
	
	float margemlucro;
	
	printf("\nDigite a margem de lucro em %: ");
	scanf("%f", &margemlucro);
	
	margemlucro = (margemlucro / 100) + 1;
	
	printf("\n\nProdutos\tCusto");
	for(i = 0; i < numitens; i++){
		printf("\n%s\t\tR$ %.2f", nomeitens[i], precoitens[i] * margemlucro);
	}
	
	return 0;
}
