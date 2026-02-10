#include <stdio.h>

void increment(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        a[i] = a[i] + 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    increment(n, a);

    return 0;
}
