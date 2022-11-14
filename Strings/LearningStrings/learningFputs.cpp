#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE *pont_arq;
	int r;
	
	pont_arq = fopen("arquivo2.txt", "w");
	
	if(pont_arq == NULL) {
		printf("Erro ao tentar abrir arquivo!");
		exit(1);
	}
	
	r = fputs("Programando em linguagem C, verificando gravação de texto.", pont_arq);
	
	if(r == EOF) {
		printf("Erro ao tentar gravar os dados!");
	}
	
	else {
		printf("Dados gravados com sucesso!");
	}
	
	fclose(pont_arq);
	
	return 0;
}
