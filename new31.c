// wap to search index in array
#include <stdio.h>
#define MAXSIZE 100
int main(){
    int n,element,a[MAXSIZE],i,ind;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    printf("Enter the array element: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the index to search: ");
    scanf("%d", &ind);
    if(ind>=0 && ind<n){
        printf("Enter the index %d is %d\n", ind,a[ind]);
    }
    else{
        printf("Invalid index\n");
    }
    return 0;
}