#include <stdio.h>
#define MAXSIZE 100

int main(void) {
    int size;
    int evenArr[MAXSIZE], oddArr[MAXSIZE];
    int evenCount = 0, oddCount = 0;
    long long sum = 0;
    int value;

    printf("Enter number of elements (1-%d): ", MAXSIZE);
    if (scanf("%d", &size) != 1 || size <= 0 || size > MAXSIZE) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &value) != 1) {
            printf("Invalid input\n");
            return 1;
        }
        sum += value;
        if ((value % 2) == 0) {
            evenArr[evenCount++] = value;
        } else {
            oddArr[oddCount++] = value;
        }
    }

    printf("\nEven elements (%d):", evenCount);
    if (evenCount == 0) {
        printf(" None");
    } else {
        for (int i = 0; i < evenCount; i++) {
            printf(" %d", evenArr[i]);
        }
    }
    printf("\n");

    printf("Odd elements (%d):", oddCount);
    if (oddCount == 0) {
        printf(" None");
    } else {
        for (int i = 0; i < oddCount; i++) {
            printf(" %d", oddArr[i]);
        }
    }
    printf("\n");

    printf("\nSummary:\n");
    printf("Total elements: %d\n", size);
    printf("Even elements: %d\n", evenCount);
    printf("Odd elements: %d\n", oddCount);
    printf("Sum of elements (%lld) is %s\n", sum, (sum % 2 == 0) ? "even" : "odd");

    return 0;
}