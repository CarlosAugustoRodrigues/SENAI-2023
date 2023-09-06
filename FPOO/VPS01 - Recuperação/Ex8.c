#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	char nome[5][20];
	int idade[5], i;
	
	for(i = 0; i < 5; i++){
		printf("Nome: ");
		scanf("%s", &nome[i]);
		printf("Idade: ");
		scanf("%d", &idade[i]);
		printf("\n");
	}
	
	int auxIdade, j;
	char auxNome[20];
	
	for(i = 0; i < 5; i++){
		for(j = i + 1; j < 5; j++){
			if(idade[i] < idade[j]){
				auxIdade = idade[i];
				strcpy(auxNome, nome[i]);
				idade[i] = idade[j];
				strcpy(nome[i], nome[j]);
				idade[j] = auxIdade;
				strcpy(nome[j], auxNome);
			}
		}
	}
	
	printf("\nNome: %s, Idade: %d", nome[0], idade[0]);
	
	return 0;
}
