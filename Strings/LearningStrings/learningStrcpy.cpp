#include <stdio.h>
#include <string.h>

int main() {
	
	char st1[] = "abc";
	char st2[] = "abd";
		char str1[50] = "Thiago", str2[50] = "Bruno";
	
	strcpy(str1, str2);
		
	for(int i = 0 ; str1[i] != '\0' ; i++) {
		printf("%c", str1[i]);
	}
	
	return 0;
}
