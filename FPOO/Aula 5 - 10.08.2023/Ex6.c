#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	
	while(numero!=4){
		printf("Digite um n�mero: ");
		scanf("%d", &numero);
	}
	
	return 0;
}
