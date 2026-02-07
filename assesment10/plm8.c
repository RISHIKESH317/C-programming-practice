#include <stdio.h>

int main()
{
    char num[51];
    int valid = 1;

    printf("Enter number (up to 50 digits): ");
    fgets(num, 51, stdin);

    // validate digits
    for(int i = 0; num[i] != '\0'; i++)
    {
        if(num[i] == '\n')
            break;

        if(num[i] < '0' || num[i] > '9')
        {
            valid = 0;
            break;
        }
    }

    if(valid)
        printf("Valid number");
    else
        printf("Invalid number");

    return 0;
}
