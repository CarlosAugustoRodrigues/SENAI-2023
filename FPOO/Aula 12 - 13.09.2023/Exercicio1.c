#include <stdio.h>
#include <locale.h>

float medianotas(float n1, float n2, float n3){
	
	float media = (n1 + n2 + n3) / 3;
	
	return (media);
}

int main(){
	
	setlocale(LC_ALL, "");
	
	int i;
	float notas[3];
	
	for(i = 0; i < 3; i++){
		printf("Digite a %dª nota: ", i + 1);
		scanf("%f", &notas[i]);
	}
	
	printf("A media é = %.1f", medianotas (notas[0], notas[1], notas[2]));
	
	return 0;
}
