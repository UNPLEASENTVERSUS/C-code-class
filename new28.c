// wap to count total odd and even no value in a array
#include <stdio.h>
#define MAXSIZE 7
int main() {
    int a[MAXSIZE], odd[100], even[100];
    int n, i, oddCount = 0, evenCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0) {
            even[evenCount] = a[i];
            evenCount++;
        } else {
            odd[oddCount] = a[i];
            oddCount++;
        }
    }
    printf("Total even numbers: %d\n", evenCount);
    printf("Even numbers: ");
    for(i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("Total odd numbers: %d\n", oddCount);
    printf("Odd numbers: ");
    for(i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
    return 0;
}
