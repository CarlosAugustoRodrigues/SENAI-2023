#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	do{
	printf("Digite um número: ");
	scanf("%d", &numero);
	printf("O quadrado de %d é %d\n\n", numero, numero*numero);
	}while(numero!=4);
	
	return 0;
}
