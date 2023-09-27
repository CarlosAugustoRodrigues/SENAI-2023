#include <stdio.h>
#include <locale.h>

int main(){
	
    setlocale(LC_ALL,"");
    FILE *entrada, *saida;
    char line[100];
    char *nome;
    int n1, n2, n3;
    float media;

    entrada = fopen("arquivo.txt", "r");
    if(entrada == NULL){
        printf("Erro, n�o foi possivel abrir o arquivo\n");
    }
    else{
    	saida = fopen("resultado.txt", "w");
        while(fgets(line, 100, entrada) != NULL){
        	nome = strtok(line, " ");
        	n1 = atoi(strtok(NULL, " "));
        	n2 = atoi(strtok(NULL, " "));
        	n3 = atoi(strtok(NULL, " "));
        	media = (n1 + n2 + n3) / 3.0;
            printf("%s - 1� nota: %d | 2� nota: %d | 3� nota: %d | M�dia: %.1f\n", nome, n1, n2, n3, media);
            if(media >= 5){
            	fprintf(saida, "%s | %s\n", nome, "Aprovado");
			}else{
				fprintf(saida, "%s | %s\n", nome, "Reprovado");
			}
    	}
    	fclose(saida);
    }
    
    fclose(saida);
    fclose(entrada);
    
	return 0;
}
