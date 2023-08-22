#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int num, i;
	
	printf("Digite um número inteiro e positivo: ");
	scanf("%d", &num);
	
	for(i = 0; i <= 10; i++){
		printf("\n%d * %d = %d", num, i, num * i);
	}
	
	return 0;
}
