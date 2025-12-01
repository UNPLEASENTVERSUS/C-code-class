// WAP to print the name
// string collection of array
// C = string = chracter array
#include <stdio.h>
int main()
{
    int size , i;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    char arr[size][100];
    printf("Enter the names in array : \n");

    // for (i = 0; i < size; i++)
    // {
    //     scanf("%s", arr[i]);
    // }
    gets(arr);
    printf("The names in array are : \n");
    for (i = 0; i < size; i++)
    {
        printf("%c\n", arr[i]);
    }
    return 0;
}