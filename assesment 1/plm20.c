//get a three digit number from user and make the ten's digit as 0, then print it

#include<stdio.h>
int main() {
    int a,b;
    scanf("%d", &a);
    b = (a/100)*100;
    b = b+(a%10);
    printf("The result is :%d",b);
    return 0;
}