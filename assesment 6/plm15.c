

#include <stdio.h>

int main()
{
    int a,temp,power=1;
    printf("Enter the number : ");
    scanf("%d",&a);
    temp=a;
    while(temp>=10){
        temp/=10;
        power*=10;
    }
    printf("%d\n",temp);
    if(temp%2!=0){
        a=a-power;
        printf("%d",a);
    }
    else{
        printf("%d",a);    }
    return 0;
}
