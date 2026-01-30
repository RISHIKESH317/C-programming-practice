//print 5 to 1 by function without return

#include<stdio.h>
void disp_descend (int x){
    for(int i=5; i>=1; i--){
        printf("%d\n",i);
    }
}
int  main(){
    int x=1;
    disp_descend(x);
}