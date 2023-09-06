#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	float raio;
	float altura;
	float pi = 3.14;
	
	printf("Qual o raio do cilindro em cm? ");
	scanf("%f",&raio);
	
	printf("Qual a altura do cilindro em cm? ");
	scanf("%f",&altura);
	
	float areaB = raio * raio * pi;
	float areaL = 2 * (pi * raio * altura);
	float areaT = 2 * (raio * raio * pi) + 2 * (pi * raio * altura);
	float volume = pi * (raio * raio) * altura;
	
	printf("\nA �rea da base do cilindro � = %.2f cm�", areaB);
	printf("\nA �rea lateral do cilindro � = %.2f cm�", areaL);
	printf("\nA �rea total do cilindro � = %.2f cm�", areaT);
	printf("\nO volume do cilindro � = %.2f cm�", volume);
	
	return 0;
}
