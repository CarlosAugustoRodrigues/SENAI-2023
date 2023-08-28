#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int doadores, i;
	
	printf("Digite o número de doadores: ");
	scanf("%d", &doadores);
	
	char nome[doadores][15], sexo[doadores];
	int idade[doadores], dias[doadores];
	
	printf("\nDigite as seguintes informações\n");
	for(i = 0; i < doadores; i++){
		printf("\nNome: ");
		scanf("%s", &nome[i]);
		
		printf("Idade: ");
		scanf("%d", &idade[i]);
		
		printf("Sexo (M/F): ");
		scanf("%s", &sexo[i]);
		
		printf("Quantos dias desde a última doação: ");
		scanf("%d", &dias[i]);
	}
	
	printf("\nNomes\t\tStatus\n");
	for(i = 0; i < doadores; i++){
		if(sexo[i] == 'M' && dias[i] > 60 && idade[i] >= 16 && idade[i] <= 69){
			printf("%s\t\tApto\n", nome[i]);
		}else if(sexo[i] == 'F' && dias[i] > 90 && idade[i] >= 16 && idade[i] <= 69){
			printf("%s\t\tApto\n", nome[i]);
		}else{
			printf("%s\t\tInapto\n", nome[i]);
		}
	}
	
	return 0;
}
