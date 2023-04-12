#include <stdio.h>

int main() {
    int arr[100], i, n, index;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the index of the element to be deleted: ");
    scanf("%d", &index);

    
    for (i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    
    n--;

    
    printf("The updated array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
