#include <stdio.h>
#define MAXSIZE 100

int main() {
    int size;
    int a[MAXSIZE];

    printf("Enter number of elements (1-%d): ", MAXSIZE);
    if (scanf("%d", &size) != 1 || size <= 0 || size > MAXSIZE) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }

    // New: separate into even and odd arrays
    int evenArr[MAXSIZE], oddArr[MAXSIZE];
    int evenCount = 0, oddCount = 0;
    long long sum = 0;

    for (int i = 0; i < size; i++) {
        sum += a[i];
        if (a[i] % 2 == 0) {
            evenArr[evenCount++] = a[i];
        } else {
            oddArr[oddCount++] = a[i];
        }
    }

    // Print separated arrays
    printf("\nEven elements (%d): ", evenCount);
    if (evenCount == 0) {
        printf("None");
    } else {
        for (int i = 0; i < evenCount; i++) {
            printf("%d ", evenArr[i]);
        }
    }
    printf("\n");

    printf("Odd elements (%d): ", oddCount);
    if (oddCount == 0) {
        printf("None");
    } else {
        for (int i = 0; i < oddCount; i++) {
            printf("%d ", oddArr[i]);
        }
    }
    printf("\n");

    // Summary (optional)
    printf("\nSummary:\n");
    printf("Total elements: %d\n", size);
    printf("Even elements: %d\n", evenCount);
    printf("Odd elements: %d\n", oddCount);
    if (sum % 2 == 0) {
        printf("Sum of elements (%lld) is even\n", sum);
    } else {
        printf("Sum of elements (%lld) is odd\n", sum);
    }

    return 0;
}