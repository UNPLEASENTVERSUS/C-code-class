#include <stdio.h>

int main () {

// WAP calculate the employ total salary (ts)
// ts = bs + da + ta - HRA
// if basic salary (bs) is <35000 then DA is 3% of bs
//                                     TA is 2% of bs
//                                     hra is 45 of bs

// bs is > 35000 and <80000 da is 4%
//                          ta is 3%
//                          HRA is 5%

// if bs is > 85000 da - 5%
//                  TA - 4%
//                  HRA - 7%

// Print total salary, presic salary, DA / TA / HRA in % age and amount after calculation

  float bs, da, ta, hra, ts;

    printf("Enter Basic Salary (BS): ");
    scanf("%f", &bs);

    if (bs < 35000) {
        da = 0.03 * bs;  
        ta = 0.02 * bs;   
        hra = 0.04 * bs;  
    }
    else if (bs >= 35000 && bs < 80000) {
        da = 0.04 * bs;   
        ta = 0.03 * bs;   
        hra = 0.05 * bs;  
    }
    else if (bs >= 85000) {
        da = 0.05 * bs;
        ta = 0.04 * bs;
        hra = 0.07 * bs;
    }
    else {
        printf("Invalid Input\n");
        return 0;
    }

    ts = bs + da + ta - hra;

    printf("\n---- Salary Details ----\n");
    printf("Basic Salary   : %.2f\n", bs);
    printf("Dearness Allowance (%%):  %.0f%%  Amount: %.2f\n", (da/bs)*100, da);
    printf("Travel Allowlance (%%):  %.0f%%  Amount: %.2f\n", (ta/bs)*100, ta);
    printf("House Rent Allowance (%%): %.0f%%  Amount: %.2f\n", (hra/bs)*100, hra);
    printf("--------------------------\n");
    printf("Total Salary   : %.2f\n", ts);

    return 0;
}