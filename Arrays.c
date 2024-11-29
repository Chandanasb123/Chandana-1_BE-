#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  


    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("\nThe elements in the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }


    printf("\nThe sum of the elements is: %d\n", sum);

    return 0;
}
