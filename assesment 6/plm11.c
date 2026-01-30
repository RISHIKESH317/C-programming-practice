

#include <stdio.h>

int main()
{
    int a,c=0;
    printf("Enter the number :");
    scanf("%d",&a);
    while(a!=0){
        
        c++;
        a/=10;
    }
    printf("%d",c);
    return 0;
}
