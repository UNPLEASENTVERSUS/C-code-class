#include <stdio.h>
int main(){
    int age;
printf("Enter you age: ");
scanf("%d",&age);
if (age >=18){
    printf("Thank you, You are eligible to vote");
}
else{
    printf("You are not old enough to vote");
}
    return 0;
}