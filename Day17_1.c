#include <stdio.h>

int main() {
    int array1[] = {1, 3, 5, 7};
    int array2[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int size3 = size1 + size2;
    int mergedArray[size3];
    int i, j;
    for (i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }
    for (j = 0; j < size2; j++) {
        mergedArray[size1 + j] = array2[j];
    }
    printf("Merged Array: ");
    for (i = 0; i < size3; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");
    return 0;
}