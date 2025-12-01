#include<stdio.h>
int main()
{
    int Physics_marks, Math_marks, sub;
    printf("Enter the marks of the subject\n");
    scanf("%d %d", &Physics_marks, &Math_marks);
    sub = Physics_marks - Math_marks;
    printf("The sub of %d and %d is %d\n", Physics_marks, Math_marks, sub);
    return 0;
}