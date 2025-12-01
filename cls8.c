#include<stdio.h>
int main()
{
    int Chemistry_marks, Computer_marks, mul;
    printf("Eneter the marks of subject\n");
    scanf("%d %d",  &Chemistry_marks, &Computer_marks);
    mul = Chemistry_marks*Computer_marks;
    printf("The multiplication of %d and %d is %d\n", Chemistry_marks, Computer_marks, mul);
    return 0;
}