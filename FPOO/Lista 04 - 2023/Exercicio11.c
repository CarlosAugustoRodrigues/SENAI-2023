#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int vetor[10], i;
	
	srand(time(NULL));
	
	for(i = 0; i < 10; i++){
		vetor[i] = rand() % 101;
	}
	
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("|%d| ", vetor[i]);
	}
	printf("\n_________________________________________________\n");
	
	int valorProcurado, posicaoValor = -1;
	
	while(posicaoValor == -1){
		printf("\nDigite um número da sequência: ");
		scanf("%d", &valorProcurado);
		
		for(i = 0; i < 10; i++){
			if(vetor[i] == valorProcurado){
				posicaoValor = i;
				break;
			}
		}
		
		if(posicaoValor == -1){
			printf("\nNúmero não encontrado na sequência acima. Digite um número novamente!");
			printf("\n_____________________________________________________________________\n");
		}
	}
	
	printf("____________________________________________\n");
	printf("\nO número %d está na posição %d da sequência.\n", valorProcurado, posicaoValor);
	printf("____________________________________________\n");
		
	return 0;
}
