#include <stdio.h>
#include <locale.h>

int main(){
	//Configura��es e declara��o de vari�veis
	setlocale(LC_ALL, "");
	char nome[30];
	float sis, dia; //Leitura das medidas de press�o
	float mediaSis = 0, mediaDia = 0; //Acumuladores iniciados com Zero
	int i; //Contador
	//Entradas
	printf("Digite o nome do atleta/cliente: ");
	scanf("%s",&nome);
	printf("Digite 5 as medidas de press�o sist�lica e diast�lica:\n");
	printf("Sys. Dia.\n");
	for(i = 0; i < 5; i++){
		scanf("%f %f", &sis, &dia);
		mediaSis += sis; //Acumula��o
		mediaDia += dia; //Acumula��o
	}
	//Processamento
	mediaSis /= 5;
	mediaDia /= 5;
	//Sa�da
	printf("A m�dia de press�o do(a) atleta %s\n", nome);
	printf("Sis: %.2f\tDia: %.2f\n", mediaSis, mediaDia);
    return 0;
}
