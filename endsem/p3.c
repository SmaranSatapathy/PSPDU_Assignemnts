#include <stdio.h>

void merge_sorted_arrays(double arr1[], int size1, double arr2[], int size2, double result[], int *result_size) {
    int i = 0, j = 0, k = 0;

    // Merge two arrays while removing duplicates
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            if (k == 0 || result[k - 1] != arr1[i]) {
                result[k++] = arr1[i];
            }
            i++;
        } else if (arr2[j] < arr1[i]) {
            if (k == 0 || result[k - 1] != arr2[j]) {
                result[k++] = arr2[j];
            }
            j++;
        } else {
            // Both elements are equal; add one of them to result
            if (k == 0 || result[k - 1] != arr1[i]) {
                result[k++] = arr1[i];
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from arr1
    while (i < size1) {
        if (k == 0 || result[k - 1] != arr1[i]) {
            result[k++] = arr1[i];
        }
        i++;
    }

    // Add remaining elements from arr2
    while (j < size2) {
        if (k == 0 || result[k - 1] != arr2[j]) {
            result[k++] = arr2[j];
        }
        j++;
    }

    *result_size = k; // Update the size of the result array
}

int main() {
    int size1, size2, result_size;

    // Input sizes of arrays
    printf("Enter size of array 1: ");
    scanf("%d", &size1);
    printf("Enter size of array 2: ");
    scanf("%d", &size2);

    double arr1[size1], arr2[size2], result[size1 + size2];

    // Input elements of array 1
    printf("Enter elements of array 1 in ascending order:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%lf", &arr1[i]);
    }

    // Input elements of array 2
    printf("Enter elements of array 2 in ascending order:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%lf", &arr2[i]);
    }

    // Call the merge function
    merge_sorted_arrays(arr1, size1, arr2, size2, result, &result_size);

    // Output the merged array
    printf("Merged array (no duplicates): ");
    for (int i = 0; i < result_size; i++) {
        printf("%.2lf ", result[i]);
    }
    printf("\n");

    return 0;
}
