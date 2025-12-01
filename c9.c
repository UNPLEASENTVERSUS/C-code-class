// Write a program i even or odd

#include <stdio.h>
int main () {
    int n;
    printf("Enter a digit: ");
    scanf("%d",&n);
if (n%2==0){
    printf("Even");
}
else{
    printf("odd");
}
return 0;
}