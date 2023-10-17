#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *entrada, *saida;
    entrada = fopen("entrada.csv", "r");
    saida = fopen("saida.csv", "w");
    char linha[100];

    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    
    fprintf(saida, "id;nome;nascimento;idade\n");
    
    //Cabeçalho
    fgets(linha, sizeof(linha), entrada);
    	char *hId, *hNome, *hNascimento;
    	hId = strtok(linha, ";");
    	hNome = strtok(NULL, ";");
    	hNascimento = strtok(NULL, ";");
    	
    	printf("%s;%s;%s", hId, hNome, hNascimento);
    
    //Linhas
    while (fgets(linha, sizeof(linha), entrada) != NULL) {
        char *numId, *nome;
        int ano, mes, dia;
        
        numId = strtok(linha, ";");
        nome = strtok(NULL, ";");
        ano = atoi(strtok(NULL, "-"));        
        mes = atoi(strtok(NULL, "-"));     
        dia = atoi(strtok(NULL, ";"));   
		
		int idade = 2023 - ano;  
        
        printf("%s;%s;%d-%d-%d\n", numId, nome, ano, mes, dia);
        fprintf(saida, "%s;%s;%d-%d-%d;%d\n", numId, nome, ano, mes, dia, idade);
    }

    fclose(entrada);
    fclose(saida);

    return 0;
}
