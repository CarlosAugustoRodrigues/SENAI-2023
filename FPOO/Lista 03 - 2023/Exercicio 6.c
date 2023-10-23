#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int num, i;
	
	printf("Digite um número inteiro e positivo: ");
	scanf("%d", &num);
	
	 printf("\nOs números impares entre 0 e %d são: ", num);
    for (i = 1; i <= num; i += 2){
        printf("\n%d ", i);
}
	return 0;
}
