#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c, d, e;
	
	printf("Insira 5 valores inteiros (dê espaços entre eles): ");
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	return 0;
}
