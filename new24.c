#include<stdio.h>
int countdigit()
{
    int absnum = abs(num);
    int zero = (absnum == 0);
    int digitcount = (int)log10(absnum + zero) + 1;
    return digitcount;
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Number of digit in %d is: %d\n", number, countdigit(number));
    return 0;
}