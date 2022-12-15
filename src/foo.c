//
// Created by Connor Kuljis on 14/12/2022.
//
#include "foo.h"
#include <printf.h>

int sayHello(void) {
    printf("hello from foo!\n");
}
int findSecondLargest(int *arr, int n) {
    if (n < 2) {
        return 0;
    }

    // bubblesort
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    return arr[n - 2];
}

void printArray(int *arr, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
