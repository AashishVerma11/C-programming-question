/*
Que-6)
____________________________
Given an array of integers length 3, print an array with the elements 
"rotated left" so {1, 2, 3} will become  {2, 3, 1}.

*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int rotations;

    printf("Enter number of rotations: ");
    scanf("%d", &rotations);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int r = 0; r < rotations; r++) {
        int temp = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }

    printf("Array after %d left rotation:\n", rotations );
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
