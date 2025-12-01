#include <stdio.h>
int main ()
{
int x;
    printf("Enter the number: ");
    scanf("%d",&x);

    if (x > 0){
        printf("The %d is positive.\n",x);
    }
    else if (x < 0){
        printf("The %d is negative.\n",x);
    }
    else {
        printf("The %d is negative");
    }
return 0;
}