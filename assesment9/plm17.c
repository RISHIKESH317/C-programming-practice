#include <stdio.h>

int main() {
    int arr[100];
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Adjust carry
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 10) {
            int carry = arr[i] / 10;
            arr[i] = arr[i] % 10;

            if (i + 1 < n) {
                arr[i + 1] += carry;
            } else {
                arr[n] = carry;
                n++;
            }
        }
    }

    printf("Adjusted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
