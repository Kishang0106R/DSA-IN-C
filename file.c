#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("student.txt", "w");
    
    char name[100];
    int age;
    float marks;
    int yes;
    do{
    printf("Enter name: ");
    scanf("%s", &name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter marks: ");
    scanf("%f", &marks);

    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Age: %d\n", age);
    fprintf(fptr, "Marks: %f\n", marks);
    printf("Do you want to enter another record? (1/0): ");
    scanf("%d", &yes);
    fprintf(fptr, "\n");

    }while(yes == 1);
    fclose(fptr);

    fopen("student.txt", "r");
    char c;
    c = fgetc(fptr);
    while(c != EOF){
        printf("%c", c);
        c = fgetc(fptr);
    }
    fclose(fptr);

    return 0;
}
