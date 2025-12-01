#include <stdio.h>

int getMax(int x, int y) {

    if (x >= y) {
        return x;
    } else {
        return y;
    }

}

int main () {
    
    int max = getMax(2, 3);

    printf("The maximum is: %d\n", max);
    return 0;
}



// #include <stdbool.h>


// bool ageCheck(int age) {
//     if (age >= 18) {
//         return true;
//     } else {
//         return false;
//     }
// }

// int main() {

//     int age = 7;
//     if (ageCheck(age)) {
//         printf("You may sign up!\n");
//     } else {
//         printf("You must be 18+ to sign up\n");
//     }

//     return 0;
// }




















// double cube(double num){
//     return num * num * num;

// }

// int square(double num){
//     return num * num;
// }

//  int main() {

//     double x = cube(2);
//     double y = cube(3);
//     double z = cube(4);

//     printf("%lf\n", x);
//     printf("%lf\n", y);
//     printf("%lf\n", z);

//     return 0;
// }