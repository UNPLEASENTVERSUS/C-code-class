#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int dinoPos = 0;   // 0 = ground, 1 = jumping
int cactusX = 50;  // cactus position
int score = 0;

// Function to sleep for milliseconds
void delay(int ms) {
    Sleep(ms);
}

// Clear screen
void clearScreen() {
    system("cls");
}

// Draw game screen
void draw() {
    clearScreen();

    // Dinosaur
    if (dinoPos == 1)
        printf("     \n");
    else
        printf("\n");

    printf("  dino\n");
    if (dinoPos == 1)
        printf("   ^ \n");
    else
        printf("   | \n");

    // Cactus
    for (int i = 0; i < cactusX; i++)
        printf(" ");
    printf("|\n");

    // Ground
    for (int i = 0; i < 60; i++)
        printf("_");
    printf("\n");

    printf("Score: %d\n", score);
}
     
// Main game loop
int main() {
    char ch;
    int jumpTime = 0;

    srand(time(0));

    while (1) {
        // Check jump
        if (_kbhit()) {
            ch = _getch();
            if (ch == ' ') {
                dinoPos = 1;
                jumpTime = 5;
            }
        }

        // Jump logic
        if (jumpTime > 0) {
            jumpTime--;
            if (jumpTime == 0)
                dinoPos = 0;
        }

        // Move cactus
        cactusX--;
        if (cactusX == 0) {
            cactusX = 50 + rand() % 20;  // reset cactus
            score++;
        }

        // Collision check
        if (cactusX < 6 && cactusX > 2 && dinoPos == 0) {
            clearScreen();
            printf("GAME OVER!\n");
            printf("Final Score: %d\n", score);
            break;
        }

        draw();
        delay(100);
    }

    return 0;
}   
 