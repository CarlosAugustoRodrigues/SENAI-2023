#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	char cidade[20];
	int candidatos, i, soma = 0;
	
	printf("Cidade: ");
	scanf("%s", &cidade);
	
	printf("Quantidade de candidatos: ");
	scanf("%d", &candidatos);
	
	char nome[candidatos][20];
	int votosB, votosN, votosCandi[candidatos];
	
	printf("\n");
	printf("Digite as seguintes informa��es dos candidatos");
	printf("\n");
	printf("______________________________________________");
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
		soma+=votosCandi[i];
	}
	
	int somaTotal = soma + votosB;
	
	printf("\n");
	printf("\n");
	
	printf("Situa��o da Elei��o: ");
	if(somaTotal > votosN){
		printf("Valida");
		printf("\n");
		printf("Votos V�lidos: %d", somaTotal);
		printf("\n");
		printf("Votos Inv�lidos: %d", votosN);
		printf("\n");
		printf("______________________________________________");
		printf("\n");
		
		float porcentagemVotos[candidatos];
		
		printf("\n");
		printf("Candidatos\t\t%% de votos");
		printf("\n");
		
		for(i = 0; i < candidatos; i++){
			printf("%s\t\t\t%.1f%%", nome[i], porcentagemVotos[i] = (votosCandi[i] * 100)/somaTotal);
			printf("\n");
		}
		
		if(somaTotal > 200000){
			
		}else{
			printf("N�o haver� 2� Turno");
		}
	}else{
		printf("Inv�lida");
	}

	
	return 0;
}
