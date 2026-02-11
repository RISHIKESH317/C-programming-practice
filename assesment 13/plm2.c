/*Question:
Create a sample link list with about 5 entries
using the following structure. Insert a
new entry before or after a given id.
Menu Items
1. Insert Entry
2. Display List
3. Exit*/
#include<stdio.h>
#include<stdlib.h>
typedef struct student {
    int roll;
    int maths;
    int science;
    struct student *next;
}st;
int main(){
    st *head = (st *) malloc (sizeof(st));
    head->next =NULL;
    st * temp = head;
    int x =0;
    while (1){
        printf("1.ENTER AN ELEMENT\n2.INSERT AN ELEMENT\n3.DISPLAY\n4.Exit\n");
        scanf("%d",&x);
        if(x==1){
            st *newnode = (st *)malloc(sizeof(st));
            printf("Enter the roll  : ");
            scanf("%d",&newnode->roll);
            printf("Enter the math marks: ");
            scanf("%d",&newnode->maths);
            printf("Enter the Sci mark : ");
            scanf("%d",&newnode->science);
            newnode->next=NULL;
            temp = head->next;
            if(head->next == NULL){
                head->next = newnode; 
            }
            else{
                temp = head->next;
                while(temp->next != NULL){
                   temp = temp->next;
                   }
                temp->next = newnode;
                }
        }
        else if (x==2){
            printf("Enter the element : ");
            int y ;
            scanf("%d",&y);
            temp = head->next;

            list:
            if(temp->next != NULL && (temp->roll) < y && y < (temp->next->roll)){
                st *newnode = (st *)malloc(sizeof(st));
                newnode->roll =y;
                printf("Enter the maths  : ");
                scanf("%d",&newnode->maths);
                printf("Enter the sci mark  : ");
                scanf("%d",&newnode->science);
                newnode->next = temp->next;
                temp->next = newnode;
            }
            else if (temp->next != NULL) {
                temp = temp->next;
                goto list;
            }

        }
        else if (x==3){
            temp = head;
            while(temp->next!=NULL){
                printf("Roll :%d ",temp->roll);
                printf("MATH :%d ",temp->maths);
                printf("SCI :%d\n",temp->science);
                temp = temp->next;
            }
            printf("Roll :%d ",temp->roll);
            printf("MATH :%d ",temp->maths);
            printf("SCI :%d\n",temp->science);
        }
        else return 0;
    }
}