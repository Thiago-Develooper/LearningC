/*make a program that declares variables of type integer, the program must read the numbers and return the four operations.*/
#include <stdio.h>

int main() {
	
	int n1 = 3, n2 = 3;
	int *p1 = &n1;
	int *p2 = &n2;
	
	printf("enter a number: ");
	scanf("%d", p1);
	printf("enter another number: ");
	scanf("%d", p2);
	
	printf("Sum = %d + %d = %d\n", *p1, *p2, *p1 + *p2);
	printf("Subtraction: = %d - %d = %d\n", *p1, *p2, *p1 - *p2);
	printf("Multiplication: = %d * %d = %d\n", *p1, *p2, *p1 * *p2);
	printf("Division: = %d / %d = %d\n", *p1, *p2, *p1 / *p2);
	
	return 0;
}
