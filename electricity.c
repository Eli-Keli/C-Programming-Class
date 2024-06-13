/*
Author: Eli Keli
Date: June 13
Description: Electricity Billing System
Registration Number: BSE-05-0238/2023
*/

#include <stdio.h>

int main()
{
    int customerId, unitsConsumed;
    char customerName[50];
    float chargesPerUnit, totalBill;

    // Prompt the user to enter CustomerID, CustomerName, and UnitsConsumed
    printf("Enter your Customer ID: ");
    scanf("%d", &customerId);
    printf("Enter your Name: ");
    scanf("%s", customerName);
    printf("Enter the Units consumed: ");
    scanf("%d", &unitsConsumed);

    // Check for valid units consumed
    if (unitsConsumed <= 0)
    {
        printf("Invalid number of units consumed.\n");
        return 1;
    }

    // Determine the charges per unit based on units consumed
    if (unitsConsumed <= 199)
    {
        chargesPerUnit = 1.20;
    }
    else if (unitsConsumed <= 400)
    {
        chargesPerUnit = 1.50;
    }
    else if (unitsConsumed < 600)
    {
        chargesPerUnit = 1.80;
    }
    else
    {
        chargesPerUnit = 2.00;
    }

    // Calculate the total bill
    totalBill = unitsConsumed * chargesPerUnit;

    // Apply a surcharge of 15% if the bill exceeds Kshs. 400
    if (totalBill > 400)
    {
        totalBill *= 1.15;
    }

    // Ensure the minimum bill is Kshs. 100
    if (totalBill < 100)
    {
        totalBill = 100;
    }

    // Display the bill details
    printf("\nCustomer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: Ksh. %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: Ksh. %.2f\n", totalBill);

    return 0;
}
