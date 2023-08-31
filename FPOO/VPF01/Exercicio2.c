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
	
	printf("\nDigite as seguintes informa��es dos candidatos\n");
	printf("______________________________________________\n\n");
	
	for(i = 0; i < candidatos; i++){
		printf("%d� candidato:", i + 1);
		printf("\nNome: ");
		scanf("%s", &nome[i]);
		printf("N� de votos: ");
		scanf("%d", &votosCandi[i]);
	}
	
	printf("\nVotos Brancos: ");
	scanf("%d", &votosB);
	printf("Votos Nulos:");
	scanf("%d", &votosN);
	
	for(i = 0; i < candidatos; i++){
		soma += votosCandi[i];
	}
	
	float votosValidos = soma + votosB;
	
	printf("\n______________________________________________\n");

	printf("\nSitua��o da Elei��o: ");
	
	if(votosValidos > votosN){
		printf("Valida\n");
		printf("Votos V�lidos: %.0f\n", votosValidos);
		printf("Votos Inv�lidos: %d\n\n", votosN);
		
		float porcentagemVotos[candidatos];
		
		printf("\nCandidatos");
		printf("\t\t");
		printf("%% de votos\n");
		
		for(i = 0; i < candidatos; i++){
			printf("%s", nome[i]);
			printf("\t\t\t");
			printf("%.2f%%\n", porcentagemVotos[i] = (votosCandi[i] * 100)/votosValidos);
		}
		
		float porcentagemVB;
		
		printf("Votos Brancos");
		printf("\t\t");
		printf("%.2f%%\n", porcentagemVB = (votosB * 100)/votosValidos);
		
		int auxVotos;
		char auxNome[20];
		int j;
		
		for(i = 0; i < candidatos; i++){
			for(j = i + 1; j < candidatos; j++){
				if(votosCandi[i] < votosCandi[j]){
					auxVotos = votosCandi[i];
					strcpy(auxNome, nome[i]);
					votosCandi[i] = votosCandi[j];
					strcpy(nome[i], nome[j]);
					votosCandi[j] = auxVotos;
					strcpy(nome[j], auxNome);
				}
			}
		}
		
		if(votosValidos > 200000 && votosCandi[0] < (votosValidos / 2) + 1){
			printf("\nHaver� 2� turno entre:");
			printf("\nCandidato: %s\tVotos: %d", nome[0], votosCandi[0]);
			printf("\nCandidato: %s\tVotos: %d", nome[1], votosCandi[1]);
		}else{
			printf("\nN�o haver� 2� turno");
			printf("\nCandidato Eleito: %s", nome[0]);
		}
	}else{
		printf("Inv�lida");
	}
	
	return 0;
}
