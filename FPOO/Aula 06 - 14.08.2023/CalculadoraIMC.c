#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	char nome[15];
	float peso;
	float altura;
	float imc;
	int decisao = 1;
	
	while(decisao){

		printf("\n Digite seu nome: ");
		scanf("%s", &nome);
		printf(" Digite seu peso em Kg: ");
		scanf("%f", &peso);
		printf(" Digite sua altura em metros: ");
		scanf("%f", &altura);
		
		imc = peso/(altura*altura);
		
		if(imc < 17){
			printf("\n IMC = %.2f", imc);
			printf("\n Situação: Muito abaixo do peso");
		}else if(imc >= 17 && imc < 18.49){
			printf("\n IMC = %.2f", imc);
			printf("\n Situação: Abaixo do peso");
		}else if(imc >= 18.5 && imc < 24.99){
			printf("\n IMC = %.2f", imc);
			printf("\n Situação: Peso normal");
		}else if(imc >= 25 && imc < 29.99){
			printf("\n IMC = %.2f", imc);
			printf("\n Situação: Acima do peso");
		}else if(imc >= 30 && imc < 34.99){
			printf("\n IMC = %.2f", imc);
			printf("\n Situação: Obesidade I");
		}else if(imc >= 35 && imc < 39.99){
			printf("\n IMC = %.2f", imc);
			printf("\n Situação: Obesidade II");
		}else{
			printf("\n IMC = %.2f", imc);
			printf("\n Situação: Obesidade III");
		}
		printf("\n\n Digite 1 para fazer uma nova consulta e 0 para encerrar: ");
		scanf("%d", &decisao);
		if(decisao != 1){
			printf(" ==========================================================\n");
			printf("\n PROGRAMA ENCERRADO");
		}else{
			printf(" ==========================================================\n");
		}
	}
	
	return 0;
}
