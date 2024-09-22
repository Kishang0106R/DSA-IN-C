#include <stdio.h>
int main() {
    int a;
    printf("enter the size of array: ");
    scanf("%d", &a);

    int b[a];
    printf("enter array element: ");
    for(int i=0; i<=a; i++){
        scnaf("%d", &b[a]);
    }
    for(int i=0; i<= a-1; i++){
        for(int j=0; j<=a-1-i; j++){
            if(b[j+1]> b[j]){
                int temp = b[j];
                b[j] = b[j + 1]; 
                b[j+1] = temp;
            }
        }
    }

    printf("sorted array: ");
    for(int i=0; i<=a; i++ ){
        printf("%d\n", b[i]);
    }
    return 0;
}
