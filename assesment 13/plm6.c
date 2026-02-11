/*Question:
Write a program to create a queue using a linked list.
Use add and remove. Add will insert the entry at
the top of the list. Remove will get the bottom of
the list and display. The display will show from
top to bottom.
Menu Items
1. Add
2. Remove
3. Display Stack
4. Exit*/
#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    int id;
    int maths;
    int Science;
    struct student *next;
}st;

int main(){
    st *head = NULL;
    st *rear = NULL;
    int x;
    while(1){
        printf("1.Add\n2.Remove\n3.DISPLAY\n4.EXIT\n");
        scanf("%d",&x);
        if(x==1){
            st * temp = (st *)malloc (sizeof(st));
            st * new = (st *)malloc (sizeof(st));
            printf("Roll :");
            scanf("%d",&temp->id);
            printf("Math:");
            scanf("%d",&temp->maths);
            printf("SCI :");
            scanf("%d",&temp->Science);

            if(head==NULL && rear ==NULL){
                head = temp;
                rear = temp;
            }
            else{
                rear ->next = temp;
                rear = temp;
            }

        }
        else if (x==2){
            st * temp = (st *)malloc (sizeof(st));
            temp=head;
            head = head->next;
            free(temp);
        }
        else if(x==3){
            st* temp = head;
            while(temp->next!=NULL){
                printf("Roll :");
                printf("%d ",temp->id);
                printf("Math :");
                printf("%d ",temp->maths);
                printf("SCI :");
                printf("%d\n",temp->Science);
                temp=temp->next;
            }
            
            printf("Roll :");
            printf("%d ",temp->id);
            printf("Math :");
            printf("%d ",temp->maths);
            printf("SCI :");
            printf("%d\n",temp->Science);
        }
        else break;
    }
}