#include <stdio.h>
#include <stdlib.h>

void printArray(int *array, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
}

int main(int args, char* argv[]) {

	// Basic memory allocation
	int *array = calloc(20, sizeof(*array));
	printf("Address of array: %p\n", array);

	for (int i = 0; i  < 20; i++) {
		array[i] = i;
	}
	printArray(array, 20);

	printf("%d\n", *array); // first element

	array = realloc(array, 25 * sizeof(*array));

	printf("New address of array: %p\n", array);

	for (int i = 20; i < 25; i++) {
		array[i] = 0;
	}
	printArray(array, 25);
	free(array);


	return 0;
}