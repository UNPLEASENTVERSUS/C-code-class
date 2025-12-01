#include<stdio.h>
int main()
{
    char c;
    int age;
    printf("Enter chararcter 'I' or 'i' if you are Indian: ");
    scanf("%c", &c);
    if(c == 'I' || c == 'i'){
        printf("Great! Enter your age: ");
        scanf("%d", &age);
        if(age>=18){
            printf("The age is %d and you are eligible for vote", age);
        }
    
        else{
           printf("You are under age");
    }
}
    else{
        printf("You are not Indian");
    }
    return 0;
}