#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	char times[5][20];
	int empates[5], vitorias[5], i;
	
	for(i = 0; i < 5; i++){
		printf("%dº time: ", i + 1);
		scanf("%s", &times[i]);
		printf("Vitórias: ");
		scanf("%d", &vitorias[i]);
		printf("Empates: ");
		scanf("%d", &empates[i]);
	}
	
	int pontosT[5];
	
	for(i = 0; i < 5; i++){
		pontosT[i] = (vitorias[i] * 3) + empates[i];
	}
	
	int auxPontos;
	char auxTimes[20];
	int j;
	
	for(i = 0; i < 5; i++){
		for(j = i + 1; j < 5; j++){
			if(pontosT[i] < pontosT[j]){
				auxPontos = pontosT[i];
				strcpy(auxTimes, times[i]);
				pontosT[i] = pontosT[j];
				strcpy(times[i], times[j]);
				pontosT[j] = auxPontos;
				strcpy(times[j], auxTimes);
			}
		}
	}
	
	printf("\nTimes\t\tPontos\n");
	
	for(i = 0; i < 5; i++){
		printf("%s\t\t%d\n", times[i], pontosT[i]);
	}
	
	return 0;
}
