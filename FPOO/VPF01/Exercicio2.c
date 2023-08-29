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
	printf("Digite as seguintes informações dos candidatos");
	printf("\n");
	printf("______________________________________________");
	printf("\n");
	
	for(i = 0; i < candidatos; i++){
		printf("%dº candidato:", i + 1);
		printf("\n");
		printf("Nome: ");
		scanf("%s", &nome[i]);
		printf("Nº de votos: ");
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
	
	int votosValidos = soma + votosB;
	
	printf("\n");
	printf("\n");
	
	printf("Situação da Eleição: ");
	if(votosValidos > votosN){
		printf("Valida");
		printf("\n");
		printf("Votos Válidos: %d", votosValidos);
		printf("\n");
		printf("Votos Inválidos: %d", votosN);
		printf("\n");
		printf("______________________________________________");
		printf("\n");
		
		float porcentagemVotos[candidatos];
		
		printf("\n");
		printf("Candidatos\t\t%% de votos");
		printf("\n");
		
		for(i = 0; i < candidatos; i++){
			printf("%s\t\t\t%.2f%%", nome[i], porcentagemVotos[i] = (votosCandi[i] * 100)/votosValidos);
			printf("\n");
		}
	}else{
		printf("Inválida");
	}
	
	if(votosValidos > 200000){
		printf("\n");
		printf("Haverá 2º entre:");
		printf("\n");
		
		for(i = 0; ){
			
		}
	}else{
		printf("\n");
		printf("Não haverá 2º Turno");
	}
	
	return 0;
}
