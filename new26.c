// insert new element in array
#include <stdio.h>
#define MAXSIZE 100
int main(){
    int i,n,size,a[MAXSIZE],new_element,pos;
    printf("Enter the number of array:\n");
    scanf("%d", &n);
    size = n;
    printf("Enter the elements of array:\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    if(size>=MAXSIZE){
        printf("Array is full\n");
        return 0;
    }
    printf("Enter the position to insert (0 to %d)\n ", size);
    scanf("%d", &pos);
    if(pos>size || pos<0){
        printf("Invalid Postion\n");
    }
    else{
        printf("Enter new element to insert: ");
        scanf("%d", &new_element);
        for(i=size; i>pos; i--){
            a[i] = a[i - 1];
        }
        a[pos] = new_element;
        size++;
        printf("Array after insertion:\n");
        for(i=0; i<size; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}