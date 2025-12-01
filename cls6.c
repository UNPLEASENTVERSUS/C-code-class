#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter the value of a and b");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    temp = b;
    b = a;
    printf("After swapping: ");
    printf("The value of a is %d and the value of b is %d", a,b);
    return 0;
}