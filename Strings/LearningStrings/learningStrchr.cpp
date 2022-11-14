#include <stdio.h>
#include <string.h>

int main() {
	
	char st1[50] = "abcdefghijklomnopqrstuvwxyz";
	char *p;
	p = strchr(st1, 'o');
	printf("%c", *p);
	
	return 0;
}
