/*
Author: Eli Keli
Date: June 27
Description: C Functions
Registration Number: BSE-05-0238/2023
*/

#include <stdio.h>

// Declaration
double volumeOfSphere(float r);

int main() {

    float radius;

    printf("\nEnter radius of the sphere: ");
    scanf("%f", &radius);

    // Funtion Call
    double volume = volumeOfSphere(radius);

    printf("\nThe volume of the sphere is: %.2lf", volume);

    return 0;
}

//Definition
double volumeOfSphere(float r) {
    float pi = 3.142;
    return (4 / 3) * pi * (r * r * r);
}