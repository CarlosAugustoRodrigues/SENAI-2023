#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	char nome[30];
	float salario;
	float aumento;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("Digite o salário: ");
	scanf("%f", &salario);
	
	if(1500.00 <= salario && salario < 1750.00){
		aumento = 0.15 * salario;
		printf("\nFuncionário: %s", nome);
		printf("\nAumento: %.2f", aumento);
		printf("\nSalário reajustado: %.2f", salario + aumento);
	}else if(1750.00 <= salario && salario < 2000.00){
		aumento = 0.12 * salario;
		printf("\nFuncionário: %s", nome);
		printf("\nAumento: %.2f", aumento);
		printf("\nSalário reajustado: %.2f", salario + aumento);
	}else if(2000.00 <= salario && salario < 3000.00){
		aumento = 0.09 * salario;
		printf("\nFuncionário: %s", nome);
		printf("\nAumento: %.2f", aumento);
		printf("\nSalário reajustado: %.2f", salario + aumento);
	}else if(salario >= 3000.00){
		aumento = 0.06 * salario;
		printf("\nFuncionário: %s", nome);
		printf("\nAumento: %.2f", aumento);
		printf("\nSalário reajustado: %.2f", salario + aumento);
	}else{
		printf("\nFuncionário: %s", nome);
		printf("\nO funcionário não terá aumento, portanto seu salário continua %.2f", salario);
	}
	
	return 0;
}
