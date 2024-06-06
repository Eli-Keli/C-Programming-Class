#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, time, finalAmount;
    int numberOfCompounds;

    // Accepting the principle amount, rate, time, and number of compounding per year
    printf("Enter the principal amount: \n");
    scanf("%f", &principle);

    printf("Enter the annual interest rate in percentage: \n");
    scanf("%f", &rate);

    printf("Enter the time in years: \n");
    scanf("%f", &time);

    printf("Enter the number of times interest is compounded per year: \n");
    scanf("%d", &numberOfCompounds);

    // Calculating compound interest
    finalAmount = principle * pow((1 + (rate / (numberOfCompounds * 100))), (numberOfCompounds * time));

     // Displaying the result
    printf("The final amount after compound interest is: %.2f\n", finalAmount);

    return 0;
}