#include <stdio.h>

int main()
{
   float principle, time, rate, simpleInterest;

   // Accepting the principle amount, time, and rate values
   printf("Enter the principle amount: \n");
   scanf("%f", &principle);

   printf("Enter the time in years: \n");
   scanf("%d", &time);

   printf("Enter the rate of interest: \n");
   scanf("%f", &rate);

   // Calculating simple interest
   simpleInterest = (principle * rate * time) / 100;

   // Displaying the simple interest
   printf("The simple interest is: %.2f\n", simpleInterest);
   return 0;
}