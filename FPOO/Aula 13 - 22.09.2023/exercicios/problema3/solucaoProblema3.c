#include <stdio.h>
#include <locale.h>

FILE *entrada, *saida;
char in[] = "sucos.in";
char out[] = "sucos.out";

int main(){
	
	setlocale(LC_ALL, "");
	
	int numP, numA, quantS;
	float quantSP;
	
	entrada = fopen(in, "r");
	saida = fopen(out, "w");
	
	while(1){
		
		fscanf(entrada, "%d", &numP);
		
		if(numP == 0){
			break;
		}
		
		fscanf(entrada, "%d", &numA);
		
		quantS = (numA * 50.0) / 1000.0;
		quantSP = quantS / numP;
		
		fprintf(saida, "%.2f\n", quantSP);
		
	}
	
	fclose(entrada);
	fclose(saida);
	
	return 0;
}
