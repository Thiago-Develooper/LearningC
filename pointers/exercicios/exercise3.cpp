/*Develop a program that makes an array with 6 positions and reads six numbers and returns them with their elements 
and addresses*/

#include <stdio.h>

int main() {
	
	int array[6];
	int *ponteiro = array;
	int *finalArray = array + 6;
	int soma = 0;
	
	for(int i = 0 ; i < 6 ; i++) {
		printf("[%d]: ", i + 1);
		scanf("%d", ponteiro);
		soma += *ponteiro;
		ponteiro++;
	}
	
	ponteiro = array;
	printf("Elements\tValue\tAddress\n\n");
	for(int i = 0 ; i < 6 ; i++) {
		printf("    %d\t\t  %d\t\t%p\n", i, *ponteiro, ponteiro);
		ponteiro++;
	}
	printf("\nSum: %d", soma);
	
	/*for(ponteiro = array ; ponteiro < finalArray ; ponteiro++) {
		printf("Digite os números do vetor: ");
		scanf("%d", ponteiro);
		soma += *ponteiro;
	}
	
	printf("\nNúmeros digitados:\n")
	for(ponteiro = array ; ponteiro < finalArray ; ponteiro++) {
		printf("%d, ", *ponteiro);
	}*/
	
	return 0;
}
