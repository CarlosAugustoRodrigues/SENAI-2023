#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	float distancia, tempo, mediaKmh;
	
	printf("Digite a dist�ncia entre duas cidades: ");
	scanf("%f", &distancia);
	printf("Digite o tempo (em horas) que levou passar percorrer a dist�ncia: ");
	scanf("%f", &tempo);
	
	mediaKmh = distancia / tempo;
	
	printf("\nA velocidade m�dia foi de %.1fKm/h", mediaKmh);
	
	return 0;
}
