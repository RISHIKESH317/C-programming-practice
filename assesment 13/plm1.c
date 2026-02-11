#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

int main() {
    struct student *head = NULL, *temp = NULL, *newNode = NULL;
    int id, maths, science;

    while (1) {
        printf("Enter Student ID (-1 to stop): ");
        scanf("%d", &id);

        if (id == -1)
            break;

        printf("Enter Maths marks: ");
        scanf("%d", &maths);

        printf("Enter Science marks: ");
        scanf("%d", &science);

        // Allocate memory for new node
        newNode = (struct student*)malloc(sizeof(struct student));

        newNode->id = id;
        newNode->Maths = maths;
        newNode->Science = science;
        newNode->next = NULL;

        // Insert into linked list
        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    printf("\nStudent Records:\n");
    temp = head;
    while (temp != NULL) {
        printf("ID: %d, Maths: %d, Science: %d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }

    return 0;
}
