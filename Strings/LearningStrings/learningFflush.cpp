#include <stdio.h>

int main() {
	
	char st1[50], st2[50];
	printf("Digite a 1a string: ");
	scanf("%s", &st1);
	
	fflush(stdin);
	printf("Digite a 2a string: ");
	fgets(st2, 50, stdin);
	
	printf("\n1a String: %s\n", st1);
	printf("2a String: %s", st2);
	
	return 0;
}
