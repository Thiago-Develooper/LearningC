#include <stdio.h>

int main() {
	
	int x = 2, y = 1;
	
	x > y ? x++ : x--;
	
	printf("%d", x);
	
	return 0;
}
