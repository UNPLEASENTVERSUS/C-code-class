// WAP a program to print  number in reverse order

#include <stdio.h>

int main ()
{
    long long int num, reverse = 0, remainder;

    printf("Enter an integer: ");

    while (num != 0)
    {
        remainder = num % 10;

        reverse = reverse * 10 + remainder;

        num /= 10;
    }

    printf("Reversed Number: %lld\n", reverse);

    return 0;
}