//string to integer array

#include<stdio.h>
#include<string.h>
int main(){
    char a[51];
    int num[50];
    printf("Enter string number :");
    fgets(a,sizeof a, stdin);
    a[strcspn(a,"\n")]='\0';
    int j=strlen(a);
    for(int i=0; i<j; i++){
        num[i]= a[i]-'0';
    }
    for(int i=0; i<j; i++){
        printf("%d",num[i]);
    }
    return 0;
}