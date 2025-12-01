// delete array in array 
#include <stdio.h>
#define MAXSIZE 100
int main(){
    int pos,n,a[MAXSIZE],i;
    printf("Enter the number of array:\n ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the index number to delete the (0 to %d)", n-1);
    scanf("%d", &pos);
    if(pos<0 || pos>=n){
        printf("Invalid Position");
    }
    else{
        for(i=pos; i<n - 1; i++){
            a[i] = a[i + 1];
        }
        n--;
        printf("Array after deletion:\n");
        for(i=0; i<n; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}