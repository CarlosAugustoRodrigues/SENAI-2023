#include <stdio.h>
#include <locale.h>

float mediaNotas(float notas[], int n){
	
	int i;
	float somaMedia;
	
	for(i = 0; i < n; i++){
		somaMedia += notas[i];
	}
	
	float media = somaMedia / n;
	
	return (media);
}

int main(){
	
	setlocale(LC_ALL, "");
	
	int n, i;
	
	printf("Quantas notas serão digitadas? ");
	scanf("%d", &n);
	
	float notas[n];
	
	for(i = 0; i < n; i++){
		printf("Digite a %dª nota: ", i + 1);
		scanf("%f", &notas[i]);
	}
	
	printf("A média das notas é = %.1f", mediaNotas(notas, n));
	
	return 0;
}
