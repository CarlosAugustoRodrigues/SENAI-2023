#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *entrada;
    entrada = fopen("entrada.csv", "r");
    char linha[100];

    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    while (fgets(linha, sizeof(linha), entrada) != NULL) {
        char *id, *nome, *nascimento;
        
        id = strtok(linha, ";");
        nome = strtok(NULL, ";");
        nascimento = strtok(NULL, ";");        
        
        printf("%s %s %s", id, nome, nascimento);
    }

    fclose(entrada);

    return 0;
}
