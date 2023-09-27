#include <stdio.h>
#include <locale.h>

#define MAX_LINE_LENGTH 1000

int main(){
	
	setlocale(LC_ALL, "");
	
	FILE *arquivo;
	char line[MAX_LINE_LENGTH];
	
	arquivo = fopen("arquivo.txt", "r");
	if(arquivo == NULL){
		printf("Erro, não foi possivel abrir o arquivo\n");
	}else{
		while(fgets(line, MAX_LINE_LENGTH, arquivo) != NULL){
			printf(line);
		}
	}
	
	fclose(arquivo);
	
	return 0;
}
