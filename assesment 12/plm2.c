#include<stdio.h>
#include<string.h>
int main(){
    char ch[100],a;
    printf("Enter string :");
    fgets(ch,sizeof ch, stdin);
    ch[strcspn(ch,"\n")]='\0';
    printf("Enter thr char :");
    scanf("%c",&a);
    for(int i=0; i<strlen(ch); i++){
        if(ch[i]==a){
            printf("%d ",i);
        }
    }
    return 0;
}