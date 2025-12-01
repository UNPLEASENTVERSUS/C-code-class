#include<stdio.h>
int main()
{
    int spoint, epoint, even;
    printf("Enter the value of spoint and epoint");
    scanf("%d %d", &spoint, &epoint);
    if(spoint!=0)
    {
        spoint++;
    }
    int num = spoint;
    while (spoint<=epoint)
    even = spoint%2;
    {
      printf("Half of the %d is %d\n", num, num/2);
      num+=2;
    }
    return 0;
}