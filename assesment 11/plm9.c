//to concentrate two array

#include <stdio.h>

void concatenate(int *a, int n1, int *b, int n2)
{
    int *p = a + n1;   

    while(n2 > 0)
    {
        *p = *b;   
        p++;
        b++;
        n2--;
    }
}

int main()
{
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1 + 50];  

    printf("Enter first array elements: ");
    int *p1 = arr1;
    for(int i = 0; i < n1; i++)
    {
        scanf("%d", p1);
        p1++;
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter second array elements: ");
    int *p2 = arr2;
    for(int i = 0; i < n2; i++)
    {
        scanf("%d", p2);
        p2++;
    }

    concatenate(arr1, n1, arr2, n2);

    printf("After concatenate: ");

    int *print = arr1;
    for(int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", *print);
        print++;
    }

    return 0;
}
