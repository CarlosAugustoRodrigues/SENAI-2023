#include <stdio.h>

int main()
{
	
	char nome[30];
	float s;
	float r;

	printf("Digite o seu nome: ");
	gets(nome);
	
	printf("Digite o valor do seu salario atualmente: ");
	scanf("%f",&s);
	
	printf("Digite a porcentagem de reajuste: ");
	scanf("%f",&r);
	
	printf("\n%s\n",nome);
	printf("R$ %.2f",(r/100+1)*s);
	
	return 0;
}
