#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int num, i;
	
	printf("Digite um n�mero inteiro e positivo: ");
	scanf("%d", &num);
	
	 printf("\nOs n�meros impares entre 0 e %d s�o: ", num);
    for (i = 1; i <= num; i += 2){
        printf("\n%d ", i);
}
	return 0;
}
