#include <stdio.h>
#include <string.h>
float average(int *arr, int size) {
	int i;
	float f = 0;
	for (i = 0; i < size; i++) {
		f += *(arr + i);
	}
	return (f / size);
}

void copy(int *arr_1, int *arr_2, int size) {
	int i;
	for (i = 0; i < size; i++) {
		*(arr_2 + i) = *(arr_1 + i);
	}
}

int count(char *string) {
	int total = 0;
	while (*(string + total)) {
		total++;
	}
	return total;
}

int main() {
	//averaging the elements of an array
	int array[7] = {2, 3, 5, 7, 11, 13, 17};
	int arr_len = sizeof(array) / 4;
	printf("\nAverage of array: %f \n\n", average(array, arr_len));

	//copying contents of an array
	int arr_1[6] = {1, 4, 9, 16, 25, 36};
	int arr_2[6];
	int arr_1_len = sizeof(arr_1) / 4;
	copy(arr_1, arr_2, arr_1_len);

	int i;
	for (i = 0; i < arr_1_len; i++) {
		printf("arr_1[%d]: %d\n", i, *(arr_1+i));
	}
	printf("\n");
	for (i = 0; i < arr_1_len; i++) {
		printf("arr_2[%d]: %d\n", i, *(arr_2+i));
	}
	printf("\n");

	//counting length of a string
	char str[] = "Cowabunga!";
	printf("Length of \"Cowabunga!\": %d\n", count(str));
	printf("\n");

	//strcpy
	char cpy_1[] = "I will be copied!";
	printf("Original String: %s\n", cpy_1);

	char cpy_2[sizeof(cpy_1)];
	strcpy(cpy_2, cpy_1);
	printf("Copied String: %s\n\n", cpy_2);

	//strcat
	char cat_1[] = "Good ";
	char cat_2[] = "Morning!";
	printf("cat_1: %s\n", cat_1);
	printf("cat_2: %s\n", cat_2);

	strcat(cat_1, cat_2);
	printf("Concatenated String: %s\n\n", cat_1);

	//strcmp
	char cmp_1[] = "Bob";
	char cmp_2[] = "Joe";

	if (strcmp(cmp_1, cmp_2) > 0) {
		printf("\"Bob\" > \"Joe\"\n");
	}
	else {
		printf("\"Bob\" < \"Joe\"\n");
	}

	char cmp_3[] = "Glob";
	char cmp_4[] = "Glob";

	if (strcmp(cmp_3, cmp_4) == 0) {
		printf("\"Glob\" is equal to \"Glob\"\n\n");
	}
	else {
		printf("\"Glob\" is not equal to \"Glob\"\n\n");
	}

	//strchr
	char chr[] = "hello";
	char *o_p = strchr(chr, 'o');
	printf("\"o\" is the %luth letter in \"hello\"\n\n", o_p - chr + 1);
	
	return 0;
}