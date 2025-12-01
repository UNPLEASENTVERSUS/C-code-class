// search number in array
#include <stdio.h>
#define MAXSIZE 7

int main() {
    int pos, n, size, a[MAXSIZE], i,element,found;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &element);
    for(i = 0; i<n; i++){
        if(element == a[i]){
            found = 1;
            break;
        }
    }
    if(found){
        printf("Element present\n");
    }
    else{
        printf("Not present\n");
    }
    return 0;
}