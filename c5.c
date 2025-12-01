// WAP to tak input to as integer

#include <stdio.h>
int main () {
    float a;
    printf("Enter an floating point value: ");
    scanf("%f", &a);

    int x = (int)a;
    printf("Float=%f and After Conversion into int=%d", a,x);

}