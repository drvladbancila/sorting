#include <stdio.h>
#define N 5

void swap(int *a, int *b);
void bubbleSort(int v[], int size);

int main()
{
    int v1[N];
    int i;

    printf("Insert %d numbers: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &v1[i]);
    }

    bubbleSort(v1, N);

    printf("Sorted array: \n");
    for (i = 0; i < N; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    return 0;
}

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int v[], int size)
{
    int unsorted = 1;
    int i, swaps;

    while (unsorted) {
        swaps = 0;
        
        for (i = 0; i < size - 1; i++) {
            if (v[i] > v[i + 1]) {
                swap(&v[i], &v[i + 1]);
                swaps = 1;
            }
        }

        if (!swaps) {
            unsorted = 0;
        }
    }

}