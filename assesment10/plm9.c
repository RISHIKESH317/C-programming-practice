//removing leading zeros

#include<stdio.h>
#include<string.h>
int main(){
    char a[51];
    int i=0;
     printf("Enter string digit :");
     fgets(a,sizeof a,stdin);
     a[strcspn(a,"\n")]='\0';
     for(int j=0; a[j]!='\0'; j++){
         if(a[i]<'0'||a[i]>'9'){
             printf("Invalid digit");
             return 0;
}
     }
     while(a[i]=='0'){
         i++;
     }
     if(a[i]=='\0'){
         printf("0");
     }
     else{
         printf("%s",&a[i]);
     }
     return 0;
} 