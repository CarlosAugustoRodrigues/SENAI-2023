#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	do{
	printf("Digite um número: ");
	scanf("%d", &numero);
	}
	while(numero!=4);
	
	return 0;
}
