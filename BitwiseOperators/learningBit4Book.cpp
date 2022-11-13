//program that add a bit to a binary number.
#include <stdio.h>

int main() {
	
	unsigned char x = 10;
	x |= 0000001;
	//too we can do this x = x | 1
	printf("%d", x); //output 10 + 1
	
	return 0;
}
