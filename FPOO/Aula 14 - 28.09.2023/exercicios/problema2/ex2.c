#include <stdio.h>

// Função para calcular a direção final com base nos comandos
char calcular_direcao_final(char comandos[], int N) {
    char direcao = 'N';  // Inicialmente voltado para o norte
    
    int i;

    for (i = 0; i < N; i++) {
        if (comandos[i] == 'E') {
            // Girar à esquerda
            if (direcao == 'N') {
                direcao = 'O';
            } else if (direcao == 'O') {
                direcao = 'S';
            } else if (direcao == 'S') {
                direcao = 'L';
            } else if (direcao == 'L') {
                direcao = 'N';
            }
        } else if (comandos[i] == 'D') {
            // Girar à direita
            if (direcao == 'N') {
                direcao = 'L';
            } else if (direcao == 'L') {
                direcao = 'S';
            } else if (direcao == 'S') {
                direcao = 'O';
            } else if (direcao == 'O') {
                direcao = 'N';
            }
        }
    }

    return direcao;
}

int main() {
    int N;
    char comandos[1001];

    // Abrir o arquivo de entrada
    FILE *entrada = fopen("esquerda.in.txt", "r");
    if (entrada == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return 1;
    }

    // Abrir o arquivo de saída
    FILE *saida = fopen("esquerda.out.txt", "w");
    if (saida == NULL) {
        perror("Erro ao abrir o arquivo de saída");
        fclose(entrada);
        return 1;
    }

    // Ler e processar os casos de teste
    while (1) {
        fscanf(entrada, "%d", &N);
        if (N == 0) {
            break;  // Fim da entrada
        }

        fscanf(entrada, "%s", comandos);

        char direcao_final = calcular_direcao_final(comandos, N);
        fprintf(saida, "%c\n", direcao_final);
    }

    // Fechar os arquivos
    fclose(entrada);
    fclose(saida);

    return 0;
}

