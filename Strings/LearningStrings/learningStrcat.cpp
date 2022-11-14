#include <stdio.h>
#include <string.h>

int main() {
	
	char st1[50] = "Thiago", st2[50] = "Bruno";
	strcat(st1, st2);
	
	for(int i = 0 ; !(st1[i] == '\0') ; i++)
		printf("%c", st1[i]);
	
	return 0;
}
