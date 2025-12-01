#include <stdio.h>
int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("The number is Negative");
    }
    else if (n > 0) {
        printf("The number is Positive");
    }
    else {
        printf("The number is Zero");
    }

    return 0;
}