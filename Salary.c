#include<stdio.h>
int main()
{
    float ts,bs,da,ta,hra;
    printf("Enter the basic salary:");
    scanf("%f", &bs);
    if(bs<35000)
    {
        da = bs*0.05;
        ta = bs*0.02;
        hra = bs*0.04;
        ts = bs+da+ta-hra;
        printf("The basic salary: %2f\n the da is 5%%=%.2f\n The ta is 2%%=%.2f\n The hra is 3%%=%.2f\n The total salary=%.2f", bs,da,ta,hra,ts);
    }
    else if(bs<=35000 && bs>80000)
    {
        da = bs*0.04;
        ta = bs*0.03;
        hra = bs*0.05;
        ts = bs+da+ta-hra;
        printf("The basic salary: %2f\n The da is 4%%=%.2f\n The ta is 3%%=%.2f\n The hra is 5%%=%.2f\n The basic salary=%.2f", bs,da,ta,hra,ts);
    }
    else
    {
        da = bs*0.05;
        ta = bs*0.03;
        hra = bs*0.07;
        ts = bs+da+ta-hra;
        printf("The basic salary: %2f\n The da is 5%%=%.2f\n The ta is 3%%=%.2f\n The hra is 7%%=%.2f\n The basic salary=%.2f\n", bs,da,ta,hra,ts);
    }
    return 0;
}