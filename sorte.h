int sorte(int a[], int n)
{
	int temp, i, j, index;

	for (i = 0; i < n - 1; i++) {
		index = i;
		for (j = index; j < n; j++) {
			if (a[index] > a[j]) {
				temp = a[index];
				a[index] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}