/*
Author: Eli Keli
Date: June 27
Description: C Functions
Registration Number: BSE-05-0238/2023
*/

#include <stdio.h>

// Function Declaration
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);

int main()
{
    double temp;
    char unit;

    printf("Enter temperature followed by unit (C for Celsius, F for Fahrenheit): ");
    scanf("%lf %c", &temp, &unit);

    //Funtion Call
    if (unit == 'C' || unit == 'c')
    {
        printf("%.2lf Celsius is %.2lf Fahrenheit\n", temp, celsiusToFahrenheit(temp));
    }
    else if (unit == 'F' || unit == 'f')
    {
        printf("%.2lf Fahrenheit is %.2lf Celsius\n", temp, fahrenheitToCelsius(temp));
    }
    else
    {
        printf("Invalid unit entered.\n");
    }

    return 0;
}

// Function Definition
double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}
double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
