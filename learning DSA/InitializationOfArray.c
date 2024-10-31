#include<stdio.h>
int main()
{
	int arr[100],size,i,elez;
	printf("\n Enter the size of the array : ");
	scanf("%d",&size);
	printf("\n Enter the array elements : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\n Enter the element  : ");
	scanf("%d",&ele);
	size++; 
    for (i = size-1; i >= pos; i--)  
        arr[i] = arr[i - 1];  
    arr[0] = ele;  
    printf("Array elements after insertion\n");  
    for (i = 0; i<size; i++)  
        printf("%d ", arr[i]);  
    printf("\n");
}
