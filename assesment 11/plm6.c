#include <stdio.h>

void copy_string(char src[], char dest[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';   // end of string
}

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    fgets(str1, sizeof str1, stdin);

    copy_string(str1, str2);

    printf("Copied string: %s", str2);

    return 0;
}
