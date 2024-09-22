#include<stdio.h>
int main(){
    int a;
    printf("enter size of array: ");
    scanf("%d", &a);
    int b[a];
    int option, data, pos;
    printf("enter element of array: ");
    for(int i=0; i<a; i++){
        scanf("%d", &b[i]);
    }
    printf("array element: ");
    for(int i=0; i<a; i++){
        printf("%d\n", b[i]);
    }
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
            for(int i = a; i>0; i--){
                b[i] = b[i-1];
            }

            b[0] = data;
            a++;
                break;
            case 2: 
            b[a-1] = data;
            
                break;
            case 3:
            printf("enter the position: ");
            scanf("%d",&pos);
            for(int i=a-1; i>=pos-1; i--){
                b[i+1]=b[i];
            }
            b[pos-1]=data;
            a++;
                break;
            default:
                printf("Invalid option!\n");
                break;
        }
    }

    printf("array after insertion:");
    for(int i=0; i<a; i++){
        printf("%d=>", b[i]);
    }
    printf("\n");
    return 0;
}