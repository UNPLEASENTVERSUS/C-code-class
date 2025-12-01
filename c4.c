#include <stdio.h>
int main (){
    char c;
    printf("Enter any char: ");
    scanf("%c",&c);
    int a =(int)c;
    // printf("The character is %c\n", c);
    printf("The ASCII value is %d\n", a);
    return 0;
}