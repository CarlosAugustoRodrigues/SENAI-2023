#include <stdio.h>
#include <locale.h>

int main()
{
	
	int d;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual será a distância(km) que o avião sobrevoará: ");
	scanf("%d",&d);
	
	printf("O tempo para o avião 747-300 sobrevoar uma distância de %dkm a uma velocidade constante de 900km/h será: %d hora(s)",d,d/900);
	
	return 0;
}
