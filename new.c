#include <stdio.h>
#include <string.h>
int main() {
//===============================================Format Specifier=========================================================
    // %d - int
    // %f - float
    // %lf - double
    // %c - char
    // %s - string
/*
    int age = 20;
    float price = 19.99;
    double pi = 3.4152926535;
    char currency = '$';
    char name[] = "Krishna";



    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name); */

//widhth

   /* int num1 = 5;
    int num2 = 10;
    int num3 = 15;

    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);

// Precision
    float price1 = 3.14159;
    float price2 = 2.71828;
    float price3 = 1.61803;

    printf("%.2f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);



//===============================================Arithmatic Operators=========================================================

// + , - , * , / , %, ++, --

int x = 10;
int y = 2;
int z = 0;

// z = x + y;
// z = x - y;
// z = x * y;
// z = x / y;
// z = x % y;
// x+=2;
// x-=2;
// x*=2;
// x/=2;
printf("The value of z is %d\n", x); 


//===============================================User Input=========================================================

int age = 0;
float gpa = 0.0f;
char grade = '\0';
char name[30] = "";

printf("Enter your age: ");
scanf("%d", &age);

printf("Enter your gpa: ");
scanf("%f", &gpa);

printf("Enter your grade: ");
scanf(" %c", &grade);

getchar();
printf("Enter your full name: ");
fgets(name, sizeof(name), stdin);
name [strlen(name) - 1] = '\0';

printf("%s\n", name);
printf("%d\n", age);
printf("%f\n", gpa);
printf("%c\n", grade); */

//===============================================Shooping cart program=========================================================

char item1[50] = "";
float price1 = 0.0f;
int quantity1 = 0;
char currency = '$';
float total1 = 0.0f;

printf("What item would you like to buy? ");
fgets(item1, sizeof(item1), stdin);
item1[strlen(item1) - 1] = '\0';

printf("What is the price of each item? ");
scanf("%f", &price1);

printf("How many items would you like? ");
scanf("%d", &quantity1);

total1 = price1 * quantity1;

printf("\nYou have bought %d %s\n", quantity1, item1);
printf("The total is %c%.2f", currency, total1);






    return 0; 
}