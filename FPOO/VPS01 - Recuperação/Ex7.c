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
	
	printf("\nA área da base do cilindro é = %.2f cm²", areaB);
	printf("\nA área lateral do cilindro é = %.2f cm²", areaL);
	printf("\nA área total do cilindro é = %.2f cm²", areaT);
	printf("\nO volume do cilindro é = %.2f cm³", volume);
	
	return 0;
}
