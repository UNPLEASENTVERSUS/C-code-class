#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // Function prototype
bool agecheck(int age);

int main() {
    

    hello("Spongebob", 30);

    if(agecheck(30)){
        printf("You are old enough to work at the Krusty Krab\n");
    } else {
        printf("You must be 16+ to work at the Krusty Krab\n");
    }

    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool agecheck(int age){
    return age >= 16;
}