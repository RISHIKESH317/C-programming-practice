#include<stdio.h>
int main() {
    int a=11,s=0;
    loop: if (a<100)
    {
        if (((a/10)%10)==7)
        {
            s = s+a;
        }
        a += 2;
        goto loop;
    }
    printf("%d",s);
    return 0;
}