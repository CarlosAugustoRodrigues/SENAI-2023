#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	printf("O quadrado de %d � %d", numero, numero*numero);
	
	while(numero!=4){
		printf("\n\nDigite um n�mero: ");
		scanf("%d", &numero);
		printf("O quadrado de %d � %d", numero, numero*numero);
	}
	
	return 0;
}
