//to count no of digits

#include <stdio.h>

int main() {
    int a, c = 1;
    printf("Enter the number :");
    scanf("%d",&a);
  
  
    for (int i = a; i>9; i/=10) {
       c++;
    }
    
    printf("The result is  :%d", c);
    return 0;
}