#include <stdio.h>

int main()
{
    int arr[100], rev[100];
    int size, i, j;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    j = size-1; 
    printf("\nReversed array: ");
    for(i=0; i<size; i++)
    {
        rev[i] = arr[j];
        printf("%d ", rev[i]);
        j--;
    }

    return 0;
}
