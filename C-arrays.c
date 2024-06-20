/*
Author: Eli Keli
Date: June 20
Description: Arrays
Registration Number: BSE-05-0238/2023
*/

#include <stdio.h>

int main()
{

    // Single dimensional Array
    int ages[5] = {24, 17, 13, 22, 31};
    int sumAge = 0;
    int sumMatrix = 0;
    int sumMatrix1 = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Ages[%d] is %d\n", i, ages[i]);
        sumAge += ages[i];
    }

    printf("The sum of ages is: %d\n", sumAge);

    // Two Dimensional Array
    int matrix2D[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matrix[%d][%d] is %d\n", i, j, matrix2D[i][j]);
            sumMatrix += ages[i];
        }
    }

    printf("The sum of 2D Matrices is: %d\n", sumMatrix);

    // Three dimensional Array
    int matrix3D[2][3][3] = {
            {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
            {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}}
        };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("Matrix[%d][%d][%d] is %d\n", i, j, k, matrix3D[i][j][k]);
                sumMatrix1 += matrix3D[i][j][k];
            }
        }
    }

    printf("The sum of 3D Matrices is: %d\n", sumMatrix1);

    return 0;
}