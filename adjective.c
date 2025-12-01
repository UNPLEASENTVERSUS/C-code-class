#include <stdio.h>
#include <string.h>

int main() {

    
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter a adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter a noun (person, place, or thing): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter a adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter a verb (ending /w with -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter a adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';


    printf("\n TOday I went to %s a zoo.\n", adjective1);
    printf("In a exhibit I saw a %s.\n", adjective2, noun);
    printf("%s was %s!.\n", noun, adjective2, verb);
    printf("i was %s!\n", adjective3);

    printf("%s\n", noun);
    printf("%s\n", verb);
    printf("%s\n", adjective1);
    printf("%s\n", adjective2);
    printf("%s\n", adjective3);

    return 0;

}