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

void insertattheend(strutct Node ** head, int data){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    temp = head;
    int choice = 1;
    while(choice){
        if (*head == NULL) {
        *head = newNode;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    }
}

int main(){
    struct Node * head = NULL;
    struct Node * temp;
    int choice = 1, opction, newNode=NULL;

    while(choice){
        head=(struct Node *)malloc(sizeof(struct Node));
        printf("enter the data item: ");
        scanf("%d", &head->data);
        head->next = NULL;
        if(head == NULL){
            temp = head;
        }else{
            temp->next= head;
            temp = head;
        }
        printf("do you want continue: ");
        scanf("%d", &choice);
    }

    temp = head;
    printf("linked list data: ");
    while(temp !=NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        scanf("%d", &opction);

        switch(opction){
            case 1 : 
            void insertAtBeginning(head, Node);

            case 2 : 
            printf("inser at the end: ");
            scanf("%d", &newNode);

        }
    }

    temp = head;
    printf("linked list data: ");
    while(temp != NULL){
        ptrintf("%d->", temp->data);
        temp = temp->next;
    }
    return 0;
}
