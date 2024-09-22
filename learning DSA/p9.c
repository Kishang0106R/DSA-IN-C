#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next; 
};

int main(){
    struct Node *head;
    struct Node *first = NULL;
    struct Node *temp;
    int choice = 1;

    while (choice) {
        head = (struct Node *)malloc(sizeof(struct Node));
        
        printf("Enter the data item: ");
        scanf("%d", &head->data);
        head->next = NULL; 
        if (first == NULL)
            first = temp = head;
        else {
            temp->next = head;  
            temp = head;    
        }

        printf("Do you want to continue (0, 1)? ");
        scanf("%d", &choice);
    }

    temp = first;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
