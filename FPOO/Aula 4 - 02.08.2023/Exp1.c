#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int a, resto;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&a);
		
	printf("Resto = %d",resto = a % 2);
	
	if(resto){
		printf(" Impar");
	}
	
	else{
		printf(" Par");
	}
	
	return 0;
	
}
