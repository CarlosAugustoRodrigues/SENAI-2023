#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	
	while(numero!=4){
		printf("Digite um número: ");
		scanf("%d", &numero);
	}
	
	return 0;
}
