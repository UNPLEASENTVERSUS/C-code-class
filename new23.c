#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    num = (num > 0) * num + (num < 0) * (-num);
    do {
        count++;
        num = num / 10;
    } while(num != 0);
    
    printf("Number of digits: %d\n", count);
    return 0;
}