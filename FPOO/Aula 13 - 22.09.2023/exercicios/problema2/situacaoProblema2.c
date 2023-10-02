#include <stdio.h>
#include <locale.h>

FILE *entrada, *saida;
char in[] = "esquerda.in";
char out[] = "esquerda.out";

int main(){
	
	setlocale(LC_ALL, "");
	
	char comandos[100];
	int numComandos;
	
	entrada = fopen(in, "r");
	saida = fopen(out, "w");
	
	if(entrada == NULL){
		printf("ERRO, NÃO FOI POSSÍVEL ABRIR O ARQUIVO");
	}
	
	while(1){
		
		fscanf(entrada, "%d", &numComandos);
		
		if(numComandos == 0){
			break;
		}
		
		fscanf(entrada, "%s", &comandos);
		
	char direcao = 'N';
	int i;
	
		for(i = 0; i < numComandos; i++){
			if(comandos[i] == 'E'){
				if(direcao == 'N'){
					direcao = 'O';
				}else if(direcao == 'O'){
					direcao = 'S';
				}else if(direcao == 'S'){
					direcao = 'L';
				}else{
					direcao = 'N';
				}
			}
			if(comandos[i] == 'D'){
				if(direcao == 'N'){
					direcao = 'L';
				}else if(direcao == 'L'){
					direcao = 'S';
				}else if(direcao == 'S'){
					direcao = 'O';
				}else{
					direcao = 'N';
				}
			}
		}
		
		char direcaoFinal = direcao;
		
		fprintf(saida, "%c\n", direcaoFinal);
		
	}
	
	fclose(entrada);
	fclose(saida);
	
	return 0;
}
