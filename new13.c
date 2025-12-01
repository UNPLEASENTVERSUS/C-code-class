#include<stdio.h>
int main()
{
    int spoint, epoint, even;
    printf("Enter the value of spoint and epoint");
    scanf("%d %d", &spoint, &epoint);
    while(spoint!=epoint)
    {
        even = spoint%2;
        if(even == 0)
        {
            printf("Even number: %d\n", spoint);
        }
        spoint++;
    }
    return 0;
}