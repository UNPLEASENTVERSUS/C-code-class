#include <stdio.h>
int main() {
    int C_marks, GenAI_marks, sum;
    printf("Enter marks of the subject\n");
    scanf("%d %d", &C_marks, &GenAI_marks); 
    sum = C_marks + GenAI_marks;          
    printf("The sum of %d and %d is %d\n", C_marks, GenAI_marks, sum);
    return 0;
}   