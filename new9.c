#include<stdio.h>
int main()
{
    char citizen;
    int age;
    printf("Are you an Indian citizen? (y/n): ");
    scanf("%c", &citizen);
    if (citizen == 'y' || citizen == 'Y')
    {
        printf("OK! Forword to the next step..\n");
        printf("Enter your age: ");
        scanf("%d", &age);
        if(age>=18){
            printf("You are eligible to vote-\n");
            printf("Thankyou!\n");
        }
        else{
            printf("You are not eligible to vote-\n");
            printf("Sorry bout the inconvenience\n");
        }
    }
    else if(citizen == 'n' || citizen == "N")
    {
        printf("You are not  citizen so you are not eligible to vote-\n");
        printf("Sorry\n");
    }
        else{
            printf("Invalid input- Please enter y and n only\n");
            printf("Try again-\n");
        }
        return 0;
}