/*
Author: Eli Keli
Date: January 29, 2025
Description: Array Traversal (Data Structures)
Registration Number: BSE-05-0238/2023
*/

// writing a program to traverse an array in C

#include <stdio.h>

int main()
{
    int i, size;                  // variable declaration
    int arr[5] = {2, 3, 4, 5, 6}; // array declaration and initialization

    size = sizeof(arr) / sizeof(arr[0]); // calculating the size of the array

    // printing the array
    printf("Array Elements: \n");
    for (i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}