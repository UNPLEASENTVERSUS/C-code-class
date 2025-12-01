#include <stdio.h>

int main() {

    int number[][3] = {{1, 2, 3}, 
                       {4, 5, 6}, 
                       {7, 8, 9}};
    printf("%d ", number[0][0]);
    printf("%d ", number[0][1]);
    printf("%d \n", number[0][2]);

    printf("%d ", number[1][0]);
    printf("%d ", number[1][1]);
    printf("%d \n", number[1][2]);

    printf("%d ", number[2][0]);
    printf("%d ", number[2][1]);
    printf("%d \n", number[2][2]);


    return 0;
}