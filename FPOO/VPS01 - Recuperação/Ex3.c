#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	char nome[5][15], situacao[5][10];
	float n1[5], n2[5], media[5];
	int i;
	
	for(i = 0; i < 5; i++){
		media[i] = 0.0;
		
		printf("Nome do(a) aluno(a): ");
		scanf("%s", &nome[i]);
		printf("1ª nota: ");
		scanf("%f", &n1[i]);
		printf("2ª nota: ");
		scanf("%f", &n2[i]);
		printf("\n");
		
		media[i] = (n1[i] + n2[i]) / 2;
	}
	
	for(i = 0; i < 5; i++){
		if(media[i] >= 5){
			strcpy(situacao[i], "Aprovado");
		}else{
			strcpy(situacao[i], "Reprovado");
		}
	}
	
	printf("Aluno(a)\tMédia\tSituação\n");
	for(i = 0; i < 5; i++){
		printf("%s\t\t%.1f\t%s\n", nome[i], media[i], situacao[i]);
	}
	
	return 0;
}
