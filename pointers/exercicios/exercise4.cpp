/*Develop a program that uses a four-element array to read and return numbers, uses pointers, and reports the largest and
smallest vector number. */

#include <stdio.h>

int main() {
	
	int array[4], *pointer = array;
	
	printf("Enter array elements:\n");
	for(int i = 0 ; i < 4 ; i++) {
		printf("[%d]: ", i);
		scanf("%d", pointer);
		pointer++;
	}
	
	int smallest = 2147483647, biggest = 0;
	int *pntSmall = &smallest, *pntBig = &biggest;
	
	pointer = array; //relocating the pointer address to the starting position of the vector.
	printf("\nTyped data:\n");
	for(int i = 0 ; i < 4 ; i++) {
		if(*pointer > *pntBig) {
			biggest = *pointer;
		}
		if(*pointer < *pntSmall) {
			smallest = *pointer;
		}
		printf("Element: [%d] Value: %d\n", i, *pointer);
		pointer++;
	}
	printf("\nSmallest element: %d\n", *pntSmall);
	printf("Biggest element: %d\n", *pntBig);
	
	
	return 0;
}
