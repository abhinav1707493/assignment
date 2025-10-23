#include <stdio.h>
#include "arraylib.h"



int main(void) {
    int a[] = {3, 1, 4, 1, 5};
    int n = 5;

    displayArray(a, n);
    printf("Max at index %d\n", findMaxIndex(a, n));

    reverseArray(a, n);
    displayArray(a, n);

    printf("Min at index %d\n", findMinIndex(a, n));
    printf("Average = %.2f\n", findAverage(a, n));

    sortArray(a, n);
    printf("Sorted ");
    displayArray(a, n);

    int idx = linearSearch(a, n, 4);
    if (idx != -1)
        printf("Element 4 found at index %d\n", idx);
    else
        printf("Element 4 not found\n");

    return 0;
}
