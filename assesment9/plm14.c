#include <stdio.h>

int main() {
    int arr[100];
    int n = 0, num;

    // Input numbers until 0 is entered
    printf("Enter numbers (enter 0 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0)
            break;
        arr[n++] = num;
    }

    // If no numbers entered
    if (n == 0) {
        printf("No numbers entered.\n");
        return 0;
    }

    // If total numbers is odd
    if (n % 2 != 0) {
        printf("Middle number: %d\n", arr[n / 2]);
    }
    // If total numbers is even
    else {
        float avg = (arr[(n / 2) - 1] + arr[n / 2]) / 2.0;
        printf("Average of middle two numbers: %.2f\n", avg);
    }

    return 0;
}
