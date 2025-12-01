#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;

    printf("*** Number Gussing Game ***\n");

do{
    printf("Guess the number between %d - %d: ",min, max);
    scanf("%d", &guess);
    tries++;

    if(guess < answer){
        printf("TOO LOW!\n");
    }

    else if (guess > answer){
        printf("TOO HIGH!\n");
    }

    else{
        printf("CORRECT!");
    }


}while (guess != answer);

    printf("The number is %d\n", answer);
    printf("It took you %d",tries);

    return 0;
}