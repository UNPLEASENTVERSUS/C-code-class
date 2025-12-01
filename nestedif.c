#include <stdio.h>

int main () {

char c;
int age;
printf("Enter chracter 'I' or 'i' if you are indian: ");
scanf("%c", &c);
if(c == 'I' || c == 'i')
{
    printf("Good! Enter your age: "); 
    scanf("%d",&age);

if(age >= 18)
{
    printf("The age is %d and you are eligile for vote",age);
}

else{
    printf("You are under age!");
}
}
else{
    printf("You are not indian");
}

    return 0;
}