/*develop a program that declares three variables of type int and three pointers,
reads the numbers and returns them in ascending order, also shows the memory address of the numbers.*/

#include <stdio.h>

int main() {
	
	int num1, num2, num3;
	int *pnt1 = &num1, *pnt2 = &num2, *pnt3 = &num3;
	
	printf("Enter three numbers:\n");
	scanf("%d %d %d", pnt1, pnt2, pnt3);
	
	printf("Order acending of numbers: ");
	if(*pnt1 >= *pnt2 && *pnt1 >= *pnt3) {
		if(*pnt2 >= *pnt3) {
			printf("%d, %d, %d\n", *pnt3, *pnt2, *pnt1);
			printf("Their adresses are respectively: %d, %d, %d", pnt3, pnt2, pnt1);
		}
		if(*pnt3 >= *pnt2) {
			printf("%d, %d, %d\n", *pnt2, *pnt3, *pnt1);
			printf("Their adresses are respectively: %d, %d, %d", pnt2, pnt3, pnt1);
		}
	}
	
	if(*pnt2 >= *pnt1 && *pnt2 >= *pnt3) {
		if(*pnt1 >= *pnt3) {
			printf("%d, %d, %d\n", *pnt3, *pnt1, *pnt2);
			printf("Their adresses are respectively: %d, %d, %d", pnt3, pnt1, pnt2);
		}
		if(*pnt3 >= *pnt1) {
			printf("%d, %d, %d\n", *pnt1, *pnt3, *pnt2);
			printf("Their adresses are respectively: %d, %d, %d", pnt1, pnt3, pnt2);
		}
	}
	
	if(*pnt3 >= *pnt1 && *pnt3 >= *pnt2) {
		if(*pnt1 >= *pnt2) {
			printf("%d, %d, %d\n", *pnt2, *pnt1, *pnt3);
			printf("Their adresses are respectively: %d, %d, %d", pnt2, pnt1, pnt3);
		}
		if(*pnt2 >= *pnt1) {
			printf("%d, %d, %d\n", *pnt1, *pnt2, *pnt3);
			printf("Their adresses are respectively: %d, %d, %d", pnt1, pnt2, pnt3);
		}
	}
	
	return 0;
}

