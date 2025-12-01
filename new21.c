#include<stdio.h>
int main()
{
    int rows, i, j;
    rows = 2;
    for(i=0; i<=rows; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c", 'A' +j);
        }
        printf("\n");
    }
    return 0;
}