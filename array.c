#include <stdio.h>
#define maxsize 100
int main() {
    int size;
    int a[maxsize];
    int n, pos;
    
    printf("enter the value of element you want to insert: ");
    scanf("%d",&size);
    printf("enter the %d elements in array\n", size);
    
    for(int i=0; i<size; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("enter the element: ");
    scanf("%d", &n);

    printf("Enter the position: ");
    scanf("%d", &pos);

    if (pos > size || pos <= 0) {
        printf("Invalid position!");
    }
    else {
        for (int i = size; i >= pos; i--) {
            a[i] = a[i-1];
        }
        a[pos-1] = n;
        size++;
    }
    
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}