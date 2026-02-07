

#include<stdio.h>
#include<string.h>

int main()
{
  char ch[100];
  printf("Enter the string :");
  fgets(ch,100,stdin);
  ch[strcspn(ch,"\n")]='\0';
  printf("%d",strlen(ch));
  return 0;
  
}