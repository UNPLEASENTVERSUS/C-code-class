//  WAP a program to print the facrorial of a number using while loop.

#include <stdio.h>

int main() {

    int n, i = 1;

    long long fact = 1;

    printf("Enter a number: ");

    scanf("%u", &n);

    while (i <= n) {

        fact = fact * i;
        i = i + 1;

    }

    printf("Factorial is %llu\n", fact);

    return 0;
}   