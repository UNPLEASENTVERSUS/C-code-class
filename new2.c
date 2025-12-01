#include<stdio.h>
int main()
{
    int age;
    printf("Enter the your age:");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("You are eligible to vote");
        printf(" Good luck!");
    }
    else
    {
        printf("You ar not eligible to vote");
    }
    return 0;
}