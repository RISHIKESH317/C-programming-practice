//to compare two string

#include <stdio.h>
#include <string.h>

int memcomp(char *p, char *q)
{
    int i;
  for( i=0; p[i]!='\0'&& q[i]!='\0'; i++)
    {
        if(p[i] != q[i])
        {
            printf("failure");
            return 0;
        }
       
    }
    if(p[i]=='\0'&&q[i]=='\0'){
        printf("success");
    }
    else{
        printf("failure");
    }
  return 1;
  
  
}

int main()
{
    char a[100], b[100];

    printf("Enter first string: ");
    fgets(a, sizeof a, stdin);
    a[strcspn(a, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(b, sizeof b, stdin);
    b[strcspn(b, "\n")] = '\0';

    memcomp(a, b);

    return 0;
}
