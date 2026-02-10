#include <stdio.h>
#include <string.h>

void add(char a[], char b[]) {
    int i = strlen(a)-1, j = strlen(b)-1, carry = 0;
    char res[105];
    int k = 0;

    while (i >= 0 || j >= 0 || carry) {
        int x = (i >= 0) ? a[i--] - '0' : 0;
        int y = (j >= 0) ? b[j--] - '0' : 0;
        int sum = x + y + carry;
        res[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    for (i = k-1; i >= 0; i--)
        printf("%c", res[i]);
    printf("\n");
}

int main() {
    char input[200], num1[100], num2[100], op;

    while (1) {
        printf("Calc> ");
        fgets(input, sizeof(input), stdin);

        if (strncmp(input, "Exit", 4) == 0)
            break;

        sscanf(input, "%s %c %s", num1, &op, num2);

        if (op == '+') {
            add(num1, num2);
        } else {
            printf("Only addition shown (others similar)\n");
        }
    }
    return 0;
}
