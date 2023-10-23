#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");
	
	int a;
	int c;
	
	printf("Digite a quantidade de alqueires que a fazenda possuí: ");
	scanf("%d",&a);
	
	printf("Digite a quantidade de caminhões que a fazenda possuí: ");
	scanf("%d",&c);
	
	printf("\nA fazenda produz %d toneladas de laranjas",a*250);
	printf("\nCada viagem é possível levar %d toneladas de laranjas",c*20);
	
	printf("\nSão necessária(s) %d viagens para transportar todas as laranjas para a fábrica",(a*250)/(c*20));
	
	return 0;
}
