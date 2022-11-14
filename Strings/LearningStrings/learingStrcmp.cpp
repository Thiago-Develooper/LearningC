#include <stdio.h>
#include <string.h>

int main() {
	
	char str1[50] = "Thiago", str2[50] = "Thiago", str3[50] = "Tiago";
	
	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", strcmp(str1, str3));
	return 0;
}
