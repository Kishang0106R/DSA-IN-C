#include <stdio.h>
#include <stdlib.h>
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
void deleteFromBeginning(struct Node **head) {
    if (*head == NULL) {
        printf("List is already empty!\n");
        return;
    }   
    struct Node *temp = *head;
    *head = (*head)->next;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}
void deleteFromEnd(struct Node **head) {
    if (*head == NULL) {
        printf("List is already empty!\n");
        return;
    }
    struct Node *temp = *head;
    if (temp->next == NULL) {
        printf("Deleted: %d\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }
    struct Node *prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }   
    prev->next = NULL;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}
void deleteFromPosition(struct Node **head, int position) {
    if (*head == NULL) {
        printf("List is already empty!\n");
        return;
    }
    struct Node *temp = *head;
    if (position == 1) {
        *head = temp->next;
        printf("Deleted: %d\n", temp->data);
        free(temp);
        return;
    }
    struct Node *prev = NULL;
    int i = 1;
    while (i < position && temp != NULL) {
        prev = temp;
        temp = temp->next;
        i++;
    }
    if (temp == NULL) {
        printf("Position out of range\n");
        return;
    }
    prev->next = temp->next;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}
void displayList(struct Node *head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node *head = NULL;
    struct Node *temp;
    int position;
    int choice = 1, option, data;
    while (choice) {
        printf("Enter the data item: ");
        scanf("%d", &data);
        insertAtEnd(&head, data);
        printf("Do you want to continue? (1: Yes, 0: No): ");
        scanf("%d", &choice);
    }
    displayList(head);
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at a position\n");
        printf("4. Delete from the beginning\n");
        printf("5. Delete from the end\n");
        printf("6. Delete from a specific position\n");
        printf("7. Exit\n");
        printf("Choose the menu item: ");
        scanf("%d", &option);
        if (option == 7) {
            break; 
        }
        switch(option) {
            case 1:
                printf("Enter the data to insert: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
            case 2:
                printf("Enter the data to insert: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
            case 3:
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                printf("Enter the data to insert: ");
                scanf("%d", &data);
                insertAtPosition(&head, data, position);
                break;
            case 4:
                deleteFromBeginning(&head);
                break;
            case 5:
                deleteFromEnd(&head);
                break;
            case 6:
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                deleteFromPosition(&head, position);
                break;
            default:
                printf("Invalid option!\n");
                break;
        }
        displayList(head);
    }
    printf("array after changes:");
    temp= head;
    while(temp!=0){
        printf("%d\n", temp->data);
        temp=temp->next;
    };
    return 0;
}
