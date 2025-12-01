#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter the value of a and b");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a,b);
    temp = a,b;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: ");
    printf("The value of a is %d and the value of b is %d", a,b);
    return 0;
}