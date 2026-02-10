#include <stdio.h>
#include <string.h>

int main() {
    char ch[100], a[100];
    int i, j;
    int n, m;

    printf("Enter string: ");
    fgets(ch, sizeof ch, stdin);
    ch[strcspn(ch, "\n")] = '\0';

    printf("Enter substring: ");
    fgets(a, sizeof a, stdin);
    a[strcspn(a, "\n")] = '\0';

    n = strlen(ch);
    m = strlen(a);

    for (i = 0; i <= n - m; i++) {
        for (j = 0; j < m; j++) {
            if (ch[i + j] != a[j]) {
                break;
            }
        }
        if (j == m) {   
            printf("Position at %d\n", i + 1);
        }
    }

    return 0;
}
