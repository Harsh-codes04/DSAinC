#include <stdio.h>
#include <stdlib.h>

struct slist {
    int data;
    struct slist *next;
};

typedef struct slist *node;

node start = NULL;

void create() {
    node temp, temp1;

    // Allocate memory for a new node
    temp = (node)malloc(sizeof(struct slist));

    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Store data in the new node
    printf("Enter number for new node: ");
    scanf("%d", &temp->data);

    temp->next = NULL;

    // If the list is empty
    if (start == NULL) {
        start = temp;
    }
    else {
        // Traverse to the last node
        temp1 = start;

        while (temp1->next != NULL) {
            temp1 = temp1->next;
        }

        // Connect the last node to the new node
        temp1->next = temp;
    }
}
void finsert(){
    node temp;
    temp = (node)malloc(sizeof(struct slist));

    temp -> next = NULL;

    printf("\nEnter element at 1 position in linked list:");
    scanf("\n %d",&temp -> data);
    temp -> next = start;
    start = temp;
    printf("Node inserted successfully");
}

void display() {
    node temp = start;

    if (temp == NULL) {
        printf("List is empty.\n");
    }
    else {
        printf("Linked List: ");

        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }

        printf("NULL\n");
    }
}

int main() {
    int ch;

    while (1) {
        printf("\n1 -> Create node\n");
        printf("2 -> Display list\n");
        printf("3 -> Exit\n");
        printf("4 -> Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &ch);

        if (ch == 1) {
            create();
        }
        else if (ch == 2) {
            display();
        }
        else if (ch == 3) {
            finsert();
        }
        else if(ch==4){
            break;
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
