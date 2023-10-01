#include <stdio.h>
#include <locale.h>

FILE *entrada, *saida;
char in[] = "esquerda.in";
char out[] = "esquerda.out";


char direcaoFinal(char comandos[], int numComandos){
	
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
			}else if(direcao == 'L'){
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
			}else if(direcao == 'O'){
				direcao = 'N';
			}
		}
	}
	
	return direcao;
	
}

int main(){
	
	setlocale(LC_ALL, "");
	
	char comandos[100];
	int numComandos;
	
	entrada = fopen(in, "r");
	saida = fopen(out, "w");
	
	while(1){
	
		if(entrada == NULL){
			printf("ERRO, NÃO FOI POSSÍVEL ABRIR O ARQUIVO");
		}
		
		fscanf(entrada, "%d", &numComandos);
		
		if(numComandos == 0){
			break;
		}
		
		fscanf(entrada, "%s", &comandos);
		
		char direcao = direcaoFinal(comandos, numComandos);
		
		fprintf(saida, "%c\n", direcao);
		
	}
	
	fclose(entrada);
	fclose(saida);
	
	return 0;
}
