#include<stdio.h>
int memcomp(int a[],int b[],int n){
    for(int i=0; i<  n; i++){
        if(a[i]!=b[i]){
            printf("failure");
            return 0;
        }
    }
    printf("success");
}
int  main(){
    int n;
    printf("Enter size :");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Enter first set integer :");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the second set integer :");
    for(int i=0; i<n; i++){
        scanf("%d",&b[i]);
    }
    memcomp(a,b,n);
}