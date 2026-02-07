//reverse string number


#include<stdio.h>
#include<string.h>
int main(){
    char a[51];
    int temp,j;
    printf("Enter string number :");
    fgets(a,sizeof a,stdin);
    a[strcspn(a,"\n")]='\0';
    j=strlen(a)-1;  // to avid printing null'\0'
    for(int i=0; i<j; i++){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("%s",a);
    return 0;
}