#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number:");
    scanf("%d", &x);
    if(x>0) {
    printf("The %d is positive\n", x);
    }
    else if(x<0) {
    printf("The %d is negative\n", x);
    }
    else {
        printf("The %d is zero", x);
    }
    return 0;
}