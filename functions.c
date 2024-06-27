/*
Author: Eli Keli
Date: June 27
Description: C Functions
Registration Number: BSE-05-0238/2023
*/

#include <stdio.h>

// Function Declarations
int product(float x, float y);
int isEven(int num);

int main() {

    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    //Funtion Call
    int result = product(6, 8);
    if (isEven(num))
    {
        printf("%d is even.\n", num);
    }
    else
    {
        printf("%d is odd.\n", num);
    }
    

    printf("\nThe result of the product is %d", result);

    return 0;
}


// Function Definition
int product(float x, float y) {
    return x * y;
}
int isEven(int num) {
    return num % 2 == 0;
}

