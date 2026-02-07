//Get an integer and print each digit as a character. Print one character on one line.

#include<stdio.h>
#include<string.h>
int main(){
int a,rev=0,b;
char c;
printf("Enter number :");
scanf("%d",&a);

while(a>0){
   b=a%10;
    rev=(rev*10)+b;
    a/=10;
}
while(rev>0){
    c=(rev%10)+'0';
    printf("%c\n",c);
    rev/=10;
}
return 0;
}