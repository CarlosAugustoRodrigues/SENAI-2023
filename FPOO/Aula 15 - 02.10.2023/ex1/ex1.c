#include <stdio.h>
#include <locale.h>

FILE *entrada;
char arqEntrada[] = "entrada.csv";

int main(){
	
	setlocale(LC_ALL, "");
	
	char linha[100];
	
	entrada = fopen(arqEntrada, "r");
	
	if(entrada == NULL){
		printf("Erro, não foi possível abrir o arquivo");
	}
	
	while(fgets(linha, 100, entrada) != NULL){
		printf("%s", linha);
	}
	
	fclose(entrada);
	
	return 0;
}
