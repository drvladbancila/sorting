#include <stdio.h>
#define N 5

void selectionSort(int *, int, int);
void swap(int *, int *);

int main() 
{
	int arr[N];
	int i;

	printf("Insert %d numbers: ", N);
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	selectionSort(arr, N, 0);

	printf("Sorted array: \n");
	for (i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

void selectionSort(int *v, int dim, int startIndex)
{
	int i;
	int minIndex = startIndex;

	if (dim == startIndex) {
		return;
	}

	for (i = startIndex; i < dim; i++) {
		if (v[i] < v[minIndex]) {
			minIndex = i;
		}
	}

	swap(&v[minIndex], &v[startIndex]);

	selectionSort(v, dim, ++startIndex);
}

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
