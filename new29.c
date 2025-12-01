// wap to print min and max number in array
#include <stdio.h>
int main()
{
    int a[] = {8, 10, 2, 4, 5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int i, size;
    int max = a[0];
    int min = a[0];
    for(i=0; i<n; i++){
        if(max<a[i]){
            max = a[i];
        }
        if(min>a[i]){
            min = a[i];
        }
    }
    printf("Maximum Number: %d\n", max);
    printf("Minimum number: %d\n", min);
    return 0;
}