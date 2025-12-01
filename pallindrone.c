//  WAP to check the number is pallindrome or not.
#include <stdio.h>
int main() {
    int n, r, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum) {
        printf("Pallindrome\n");
    } else {
        printf("Not Pallindrome\n");
    }
    return 0;
}
