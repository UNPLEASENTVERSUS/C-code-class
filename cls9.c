#include<stdio.h>
int main()
{
    int C_marks, A_marks, div;
    printf("Enter the value of the subject\n");
    scanf("%d %d", &C_marks, &A_marks);
    div = C_marks/A_marks;
    printf("The Division of %d and %d is %d\n", C_marks, A_marks, div);
    return 0;
}