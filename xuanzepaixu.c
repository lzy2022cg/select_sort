#include <stdio.h>
#include <stdlib.h>
#include "sorte.h"
int sorte(int a[], int n);
int main()
{
	int n, * ptr, i;

	printf("Input thr number of array elements:");
	scanf_s("%d", &n);
	if ((ptr = (int*)calloc(n, sizeof(int))) == NULL){
		printf("Not able to allocate mereoy:");
		exit(1);
	}
	printf("Input array element:");
	for (i = 0; i < n; i++) {
		scanf_s("%d", ptr + i);
	}
	printf("After sorted:");
	sorte(ptr, n);
	free(ptr);

	return 0;
}