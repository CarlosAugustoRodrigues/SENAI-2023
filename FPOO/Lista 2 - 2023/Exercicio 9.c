#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario;
	
	printf("Digite o valor do salário: ");
	scanf("%f", &salario);
	
	if(1500.00<=salario && salario<1750.00){
		salario = salario*1.15;
		printf("%.2f", salario);
	}else if()
}
