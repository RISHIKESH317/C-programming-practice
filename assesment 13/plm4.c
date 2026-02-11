/*Question:
Create a doubly linked list with about 5
entries using the following structure.
Insert a new entry before or after a given
id. Delete an entry of a given id.
Menu Items
1. Insert Entry
2. Delete Entry
3. Display List
4. Exit*/

#include <stdio.h>
#include <stdlib.h>

struct student {
    struct student *prev;
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *head = NULL;

/* Create new node */
struct student* createNode(int id, int maths, int science) {
    struct student *newNode = (struct student*)malloc(sizeof(struct student));
    newNode->id = id;
    newNode->Maths = maths;
    newNode->Science = science;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}


void createSampleList() {
    struct student *temp = NULL;

    for(int i = 1; i <= 5; i++) {
        struct student *newNode = createNode(i, 50+i, 60+i);

        if(head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
}

void display() {
    struct student *temp = head;

    if(head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("\nStudent List:\n");
    while(temp != NULL) {
        printf("ID: %d | Maths: %d | Science: %d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

void insertEntry() {
    int refId, choice;
    int id, maths, science;

    printf("Enter reference ID: ");
    scanf("%d", &refId);

    printf("1. Insert Before\n2. Insert After\nChoice: ");
    scanf("%d", &choice);

    printf("Enter New ID: ");
    scanf("%d", &id);
    printf("Enter Maths Marks: ");
    scanf("%d", &maths);
    printf("Enter Science Marks: ");
    scanf("%d", &science);

    struct student *newNode = createNode(id, maths, science);
    struct student *temp = head;

    while(temp != NULL && temp->id != refId)
        temp = temp->next;

    if(temp == NULL) {
        printf("Reference ID not found!\n");
        return;
    }
    if(choice == 1) {  
        newNode->next = temp;
        newNode->prev = temp->prev;

        if(temp->prev != NULL)
            temp->prev->next = newNode;
        else
            head = newNode;  

        temp->prev = newNode;
    }
    else if(choice == 2) {  
        newNode->prev = temp;
        newNode->next = temp->next;

        if(temp->next != NULL)
            temp->next->prev = newNode;

        temp->next = newNode;
    }
    else {
        printf("Invalid choice!\n");
    }
}

void deleteEntry() {
    int id;
    printf("Enter ID to delete: ");
    scanf("%d", &id);

    struct student *temp = head;

    while(temp != NULL && temp->id != id)
        temp = temp->next;

    if(temp == NULL) {
        printf("ID not found!\n");
        return;
    }

    if(temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;  

    if(temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
    printf("Record deleted successfully.\n");
}

int main() {
    int choice;

    createSampleList();

    while(1) {
        printf("\nMenu\n");
        printf("1. Insert Entry\n");
        printf("2. Delete Entry\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: insertEntry(); break;
            case 2: deleteEntry(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}
