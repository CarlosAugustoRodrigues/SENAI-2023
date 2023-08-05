#include <stdio.h>

int main()
{
	
	int distancia;
	int velocidade;
	
	printf("Digite a distancia que sera percorrida pelo carro em km: ");
	scanf("%d",&distancia);
	
	printf("Digite a velocidade de deslocamento do carro em km/h: ");
	scanf("%d",&velocidade);
	
	printf("O tempo necessario para percorrer a distancia de %d km com uma velocidade constante de %d km/h sera = %d horas",distancia,velocidade,distancia/velocidade);
	
	return 0;
	
}
