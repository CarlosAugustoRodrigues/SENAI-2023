#include <stdio.h>

int pilha[] = {21, 55, 62, 8, 14, 03};
int i;

void mostraPilha(){
	
	printf("Pilha: ");
	
	for(i = 0; i < 6; i++){
		printf("%d\n", pilha[i]);
	}
}

int main(){
	
	int i, j, aux;
	
	for(i = 0; i < 6; i++){
		for(j = i + 1; j < 5; j++){
			if(pilha[i] < pilha[j]){
				aux = pilha[i];
				pilha[i] = pilha[j];
				pilha[j] = aux;
			}
		}
	}
	
	mostraPilha();

}
