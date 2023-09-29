#include <stdio.h>
#include <locale.h>
#define SIZE 10


int fila[SIZE];
int ponteiro = 0;
int i;

void mostraFila(){
	
	printf("\nFila:\n");
	
	if(ponteiro > 0){
		for(i = 0; i < ponteiro; i++){
		printf("%d\n", fila[i]);
		}
	}else{
		printf("Não existe mais elementos para retirar");
	}
		
}

int push(int dado){
	
	if(ponteiro < SIZE){
		fila[ponteiro] = dado;
		ponteiro++;
		return 1;
	}else{
		return 0;
	}
}

int pop(){
	
	if(ponteiro >= 0){
		for(i = 0; i < ponteiro; i++){
			fila[i] = fila[i + 1];	
		}
		ponteiro--;
		return 1;
	}else{
		return 0;
	}

}

int main(){
	
	setlocale(LC_ALL, "");
	
	push(25);
	mostraFila();
	push(18);
	mostraFila();
	push(10);
	mostraFila();
	push(3);
	mostraFila();
	pop();
	mostraFila();
	pop();
	mostraFila();
	pop();
	mostraFila();
	pop();
	mostraFila();
	
}
