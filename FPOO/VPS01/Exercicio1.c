#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int nota1, nota2, media;
	
	printf("Digite as duas notas da disciplina: ");
	scanf("%d %d", &nota1, &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("\nA média é: %d", media);
	
	if(media >= 6){
		printf("\nVocê está aprovado");
	}else{
		printf("\nVocê está reprovado");
	}
	
	return 0;
}
