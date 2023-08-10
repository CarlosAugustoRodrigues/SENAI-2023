#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	printf("O quadrado de %d é %d", numero, numero*numero);
	
	while(numero!=4){
		printf("\n\nDigite um número: ");
		scanf("%d", &numero);
		printf("O quadrado de %d é %d", numero, numero*numero);
	}
	
	return 0;
}
