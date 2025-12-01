#include<stdio.h>
int main()
{
    float C_marks, GenAI_marks, sum;
    printf("Enter marks of subjects\n");
    scanf("%f %f", &C_marks, &GenAI_marks);
sum = ((float)30.0/100.0)*C_marks + ((float)70.0/100.0)*GenAI_marks;
printf("The sum of %f and %f = %f", C_marks, GenAI_marks, sum);
}
