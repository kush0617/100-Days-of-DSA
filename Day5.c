#include <stdio.h>

int main() {
    int p, q;
    scanf("%d", &p);

    int arr1[1000], arr2[1000];

    for (int i = 0; i < p; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0;

    // Merge both sorted arrays
    while (i < p && j < q) {
        if (arr1[i] <= arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else {
            printf("%d ", arr2[j]);
            j++;
        }
    }

    // Print remaining elements of arr1
    while (i < p) {
        printf("%d ", arr1[i]);
        i++;
    }

    // Print remaining elements of arr2
    while (j < q) {
        printf("%d ", arr2[j]);
        j++;
    }

    return 0;
}