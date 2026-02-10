//to compare two strings

#include<stdio.h>
#include<string.h>
int memcomp(char a[],char b[]){
    for(int i=0; a[i]!='\0';i++){
        if(a[i]!=b[i]){
            printf("failure");
            return 0;
        }
    
    }
    printf("success");
}
int  main(){
    char a[100],b[100];
    printf("Enter first set string :");
  fgets(a,sizeof a,stdin);
  a[strcspn(a,"\n")]='\0';
    printf("Enter the second set string :");
    fgets (b, sizeof b, stdin);
      b[strcspn(b,"\n")]='\0';
    memcomp(a,b);
}