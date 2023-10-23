#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	float raio;
	float altura;
	float pi = 3.14;
	
	printf("Qual o raio do cilindro em cm? ");
	scanf("%f",&raio);
	
	printf("Qual a altura do cilindro em cm? ");
	scanf("%f",&altura);
	
	printf("\nA área da base do cilindro é = %.2f cm²",raio*raio*pi);
	printf("\nA área lateral do cilindro é = %.2f cm²",2*pi*raio*altura);
	printf("\nA área total do cilindro é = %.2f cm²",2*(raio*raio*pi)+2*(pi*raio*altura));
	printf("\nO volume do cilindro é = %.2f cm³",pi*(raio*raio)*altura);
	
	return 0;
	
}
