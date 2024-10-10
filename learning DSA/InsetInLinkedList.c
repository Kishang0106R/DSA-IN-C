#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next; 
};

void insertAtBeginning(struct Node **head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node **head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAtPosition(struct Node **head, int data, int position) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node *p = *head;
    int i = 1;

    while (i < position - 1 && p != NULL) {
        p = p->next;
        i++;
    }

    if (p == NULL) {
        printf("Position out of range\n");
        free(newNode);
        return;
    }

    newNode->next = p->next;
    p->next = newNode;
}
int main() {
    struct Node *head = NULL; 
    struct Node *temp;
    int position; 
    int choice = 1, option, data;

    while(choice) {
        printf("Enter the data item: ");
        scanf("%d", &data);
        insertAtEnd(&head, data); 
        printf("Do you want to continue? (1: Yes, 0: No): ");
        scanf("%d", &choice);
    }

    temp = head;
    printf("Linked list data: ");
    while(temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at the position:\n");
        printf("4. Exit\n");

        printf("choose the menu item:");
        scanf("%d", &option);

        if (option == 4) {
            break; 
        }

        printf("Enter the data to insert: ");
        scanf("%d", &data);

        switch(option) {
            case 1: 
                insertAtBeginning(&head, data);
                break;
            case 2: 
                insertAtEnd(&head, data);
                break;
            case 3:
                printf("Enter the position to insert: ");
                scanf("%d", &position); 
                insertAtPosition(&head, data, position);
                break;
            default:
                printf("Invalid option!\n");
                break;
        }

        temp = head;
        printf("Updated linked list: ");
        while(temp != NULL) {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }

    return 0;
}
