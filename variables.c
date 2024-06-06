#include <stdio.h>

int main()
{
    int hours;
    int tottalhours;
    int exactWorkHours = 40;
    int days;
    int totalPay;
    int grossPay;
    int extraPay;
    printf("Please enter the number of days worked: \t");
    scanf("%d", &days);
    printf("Please enter the number of hours worked:\t ");
    scanf("%d", &hours);
    tottalhours = days * hours;
    printf("Your total work hours %d\n", tottalhours);
    grossPay = 1500 * 40;
    printf("Your Gross earning is %d\n", grossPay);

    exactWorkHours = tottalhours - exactWorkHours;
    if (exactWorkHours <= 40)
    {
        printf("You don't have any extra work hours \n");
    }
    else
    {
        extraPay = exactWorkHours * 1.5 * 1500;
        printf("Your extra pay is %d\n", extraPay);
    }

    if (exactWorkHours <= 0)
    {
        printf("Your total pay is %d", grossPay);
    }
    else
    {
        totalPay = grossPay + extraPay;
        printf("Your total payment is %d\n", totalPay);
    }

    return 0;
}