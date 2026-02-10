#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    int  i,sum=0;
    printf("Enter the string :");
    fgets(ch,sizeof ch, stdin);
    ch[strcspn(ch, "\n")]='\0';
    if(strlen(ch)>0){
        sum=1;
    }
    else{
        sum=0;
    }
    for( i=0; i<strlen(ch)-1; i++){
        if(ch[i]==' '){
         sum++;   
        }
     }
    printf("Total count is :%d",sum);
}