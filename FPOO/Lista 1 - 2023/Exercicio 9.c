#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	char mercadoria[10];
	float preco;
	float reajuste = 1.05;
	
	printf("Digite o nome da mercadoria: ");
	gets(mercadoria);
	
	printf("Digite o valor da mercadoria: ");
	scanf("%f",&preco);
	
	printf("\nMercadoria: %s",mercadoria);
	printf("\nValor reajustado: %.2f",reajuste*preco);
	
	return 0;
}
