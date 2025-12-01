// String from uppaer case to lower case conversion
#include <stdio.h>
#include <string.h>
int main()
{
    int size, i, j;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    char arr[size][100];
    printf("Enter the strings in uppercase : \n");
    for (i = 0; i < size; i++)
    {
        scanf("%c", arr[i]);
    }
    printf("The strings in lowercase are : \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; arr[i][j] != '\0'; j++)
        {
            if (arr[i][j] >= 'A' && arr[i][j] <= 'Z')
            {
                arr[i][j] = arr[i][j] + 32; // Convert to lowercase
            }   
        }
        printf("%s\n", arr[i]);
    }
    return 0;
}