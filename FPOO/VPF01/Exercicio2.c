#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	char cidade[20];
	int candidatos, i, soma = 0;
	
	printf("Cidade: ");
	gets(cidade);
	
	printf("Quantidade de candidatos: ");
	scanf("%d", &candidatos);
	
	char nome[candidatos][20];
	int votosB, votosN, votosCandi[candidatos];
	
	printf("\n");
	printf("Digite as seguintes informa��es dos candidatos");
	printf("\n");
	printf("______________________________________________");
	printf("\n");
	printf("\n");
	
	for(i = 0; i < candidatos; i++){
		printf("%d� candidato:", i + 1);
		printf("\n");
		printf("Nome: ");
		scanf("%s", &nome[i]);
		printf("N� de votos: ");
		scanf("%d", &votosCandi[i]);
		printf("\n");
	}
	
	printf("Votos Brancos: ");
	scanf("%d", &votosB);
	printf("Votos Nulos:");
	scanf("%d", &votosN);
	
	for(i = 0; i < candidatos; i++){
		soma += votosCandi[i];
	}
	
	float votosValidos = soma + votosB;
	
	printf("\n");
	printf("______________________________________________");
	printf("\n");
	printf("\n");
	
	printf("Situa��o da Elei��o: ");
	
	if(votosValidos > votosN){
		printf("Valida");
		printf("\n");
		printf("Votos V�lidos: %.0f", votosValidos);
		printf("\n");
		printf("Votos Inv�lidos: %d", votosN);
		printf("\n");
		printf("\n");
		
		float porcentagemVotos[candidatos];
		
		printf("\n");
		printf("Candidatos");
		printf("\t\t");
		printf("%% de votos");
		printf("\n");
		
		for(i = 0; i < candidatos; i++){
			printf("%s", nome[i]);
			printf("\t\t\t");
			printf("%.2f%%", porcentagemVotos[i] = (votosCandi[i] * 100)/votosValidos);
			printf("\n");
		}
		
		float porcentagemVB;
		
		printf("Votos Brancos");
		printf("\t\t");
		printf("%.2f%%", porcentagemVB = (votosB * 100)/votosValidos);
		printf("\n");
		
		int primeiro;
		int segundo;
		int j;
		
		for(i = 0; i < candidatos; i++){
			for(j = 0; j < candidatos - 1; j++){
				if(votosCandi[j] > votosCandi[j + 1]){
					primeiro = j;
				}
			}
			for(j = 0; j < candidatos - 1; j++){
				if(votosCandi[j] > votosCandi[j + 1]){
					if()
					segundo = j;
				}	
			}
		}
		
		if(votosValidos > 200000 && votosCandi[primeiro] < (votosValidos / 2) + 1){
			printf("\n");
			printf("Haver� 2� turno entre:");
			printf("\n");
			printf("Candidato: %s\tVotos: %d", nome[primeiro], votosCandi[primeiro]);
			printf("\n");
			printf("Candidato: %s\tVotos: %d", nome[segundo], votosCandi[segundo]);
		}else{
			printf("\n");
			printf("N�o haver� 2� turno");
			printf("\n");
			printf("Candidato Eleito: %s", nome[primeiro]);
		}
	}else{
		printf("Inv�lida");
	}
	
	return 0;
}
