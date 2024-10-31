#include<stdio.h>
int main() {
    int a, b, tem;
    printf("enter a:");
    scanf("%d", &a);

    printf("enter b:");
    scanf("%d", &b);

    tem=a;
    a=b;
    b=tem;
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
