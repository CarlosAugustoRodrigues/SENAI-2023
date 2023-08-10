#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int media;
	char nome[30];
	
	printf("\nDigite o nome completo do aluno: ");
		gets(nome);
	printf("Digite a média do aluno de 0 a 100: ");
		scanf("%d",&media);
		
	printf("\n%s",nome);

	if(media >= 50){
		printf("\nAprovado");
	}
	
	else if(media < 20){
		printf("\nReprovado");
	}
	
	else{
		printf("\nRecuperação");
	}
	
	return 0;
}
