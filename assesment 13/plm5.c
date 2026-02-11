#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *top = NULL;


struct student* createNode(int id, int maths, int science) {
    struct student *newNode = (struct student*)malloc(sizeof(struct student));
    newNode->id = id;
    newNode->Maths = maths;
    newNode->Science = science;
    newNode->next = NULL;
    return newNode;
}

void push() {
    int id, maths, science;

    printf("Enter ID: ");
    scanf("%d", &id);
    printf("Enter Maths Marks: ");
    scanf("%d", &maths);
    printf("Enter Science Marks: ");
    scanf("%d", &science);

    struct student *newNode = createNode(id, maths, science);

    newNode->next = top;
    top = newNode;

    printf("Record pushed successfully.\n");
}

void pop() {
    if(top == NULL) {
        printf("Stack Underflow! Stack is empty.\n");
        return;
    }

    struct student *temp = top;

    printf("Popped Record:\n");
    printf("ID: %d | Maths: %d | Science: %d\n",
           temp->id, temp->Maths, temp->Science);

    top = top->next;
    free(temp);
}

void display() {
    if(top == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    struct student *temp = top;

    printf("\nStack (Top to Bottom):\n");
    while(temp != NULL) {
        printf("ID: %d | Maths: %d | Science: %d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

int main() {
    int choice;

    while(1) {
        printf("\nMenu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}
