#include <stdio.h>
#define N 5
int main()
{
    int v[N];
    unsigned int n;
    int j;
    int val;

    for (n = 0; n < N; n++) {
        printf("Insert %d numbers: ", N);
        scanf("%d", &val);

        for (j = n - 1; val < v[j] && j >= 0; j--) {
            v[j + 1] = v[j];
        }
        v[j + 1] = val;
    }

    printf("Sorted array: ");
    for (j = 0; j < N; j++) {
        printf("%d ", v[j]);
    }
    printf("\n");

    return 0;
}
