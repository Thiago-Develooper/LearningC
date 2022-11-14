#include <stdio.h>

int main() {
	
	char a[50], b[50];
	fgets(a, 50, stdin);
	fgets(b, 50, stdin);
	
	printf("\n\n%s", a);
	printf("%s", b);
	
	return 0;
}
