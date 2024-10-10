#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *createList();
void displayList(NODE *head);
NODE *insertAtBeginning(NODE *head, int data);

int main()
{
    NODE *head = NULL;
    int data;

    head = createList();

    printf("\nStatus of the linked list before insertion at the beginning:\n");
    displayList(head);

    printf("\nEnter the data to insert at the beginning: ");
    scanf("%d", &data);

    head = insertAtBeginning(head, data);

    printf("\nStatus of the linked list after insertion at the beginning:\n");
    displayList(head);

    return 0;
}

NODE *createList()
{
    NODE *head, *first, *temp = 0;
    int choice = 1;

    first = 0;
    while (choice)
    {
        head = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item: ");
        scanf("%d", &head->data);

        if (first != 0)
        {
            temp->next = head;
            temp = head;
        }
        else
        {
            first = temp = head;
        }
        fflush(stdin);
        printf("Do you want to continue (Type 0 or 1)? ");
        scanf("%d", &choice);
    }
    temp->next = 0;

    return first;
}

void displayList(NODE *head)
{
    NODE *temp = head;
    int count = 0;

    while (temp != 0)
    {
        printf("%d => ", temp->data);
        count++;
        temp = temp->next;
    }
    printf("NULL\n");
    printf("No. of nodes: %d\n", count);
}

NODE *insertAtBeginning(NODE *head, int data)
{
    NODE *newNode;
    newNode = (NODE *)malloc(sizeof(NODE));
    newNode->data = data;

    newNode->next = head;
    head = newNode;

    return head;
}
