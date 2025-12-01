#include <stdio.h>

int main()
{
    char citizen;
    int age;
    
    printf("Are you an Indian citizen? (y/n): ");
    scanf(" %c", &citizen);  // Added space before %c to avoid newline issue

    if (citizen == 'y' || citizen == 'Y')
    {
        printf("OK! Forward to the next step..\n");
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age >= 18)
        {
            printf("You are eligible to vote.\n");
            printf("Thank you!\n");
        }
        else
        {
            printf("You are not eligible to vote.\n");
        }
    }
    else
    {
        printf("You must be an Indian citizen to vote.\n");
    }

    return 0;
}
