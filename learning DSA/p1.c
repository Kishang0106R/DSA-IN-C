#include<stdio.h>
int main()
{
	int arr[100],size,i,ele,pos;
	printf("\n Enter the size of the array : ");
	scanf("%d",&size);
	printf("\n Enter the array elements : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\n Enter the element  : ");
	scanf("%d",&ele);
	arr[size]=ele;
    printf("Array elements after insertion\n");  
    for (i = 0; i<=size; i++)  
        printf("%d ", arr[i]);  
    printf("\n");
	return 0;
}
