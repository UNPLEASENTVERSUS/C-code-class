#include <stdio.h>

    int main()
    {
    char C;
    printf("Enter any character");
    scanf("%c", &C);
    if (C == 'A'  || C == 'E' || C == 'I' || C == 'O' || C == 'U' || 
        C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u')
    {
        printf("Vowels\n");
    }
    else {
        printf("Consonants\n");
    }
    return 0;
}