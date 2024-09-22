#include <stdio.h>

int main() {
    int a;
    printf("Enter size of array: ");
    scanf("%d", &a);
    int b[a];
    int option, data, pos;

    printf("Enter elements of the array: ");
    for (int i = 0; i < a; i++) {
        scanf("%d", &b[i]);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Delete from the beginning\n");
        printf("2. Delete from the end\n");
        printf("3. Delete from a specific position\n");
        printf("4. Exit\n");

        printf("Choose a menu item: ");
        scanf("%d", &option);

        if (option == 4) {
            break;
        }

        switch (option) {
            case 1:
                if (a > 0) {
                    for (int i = 1; i < a; i++) {
                        b[i - 1] = b[i];
                    }
                    a--;
                } else {
                    printf("Array is already empty!\n");
                }
                break;
            case 2:
                if (a > 0) {
                    a--;
                } else {
                    printf("Array is already empty!\n");
                }
                break;
            case 3:
                printf("Enter the position: ");
                scanf("%d", &pos);
                if (pos >= 1 && pos <= a) {
                    for (int i = pos; i < a; i++) {
                        b[i - 1] = b[i];
                    }
                    a--;
                } else {
                    printf("Invalid position!\n");
                }
                break;
            default:
                printf("Invalid option!\n");
                break;
        }
    }

    printf("Array after deletion: ");
    for (int i = 0; i < a; i++) {
        printf("%d=>", b[i]);
    }
    printf("\n");
    return 0;
}
