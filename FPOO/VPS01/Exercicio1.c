#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int nota1, nota2, media;
	
	printf("Digite as duas notas da disciplina: ");
	scanf("%d %d", &nota1, &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("\nA m�dia �: %d", media);
	
	if(media >= 6){
		printf("\nVoc� est� aprovado");
	}else{
		printf("\nVoc� est� reprovado");
	}
	
	return 0;
}
