#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	float distancia, tempo, mediaKmh;
	
	printf("Digite a distância entre duas cidades: ");
	scanf("%f", &distancia);
	printf("Digite o tempo (em horas) que levou passar percorrer a distância: ");
	scanf("%f", &tempo);
	
	mediaKmh = distancia / tempo;
	
	printf("\nA velocidade média foi de %.1fKm/h", mediaKmh);
	
	return 0;
}
