// WAP a program to print the sum of first n natural number using while loop.
#include <stdio.h>
int main() {

    int n, sum = 0, i = 1;

    printf("Enter number: ");

    scanf("%d", &n);

    while (i <= n) {

        sum = sum + i;

        i = i + 1;
    }

    printf("Sum is %d\n", sum);

    return 0;
}
