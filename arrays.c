#include <stdio.h>

int main()
{
    // An array storing different ages
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum = 0;
    int i;

    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    // Create a variable and assign the first array element of ages to it
    int lowestAge = ages[0];

    // Loop through the elements of the array
    for (i = 0; i < length; i++)
    {
        sum += ages[i];
        if (lowestAge > ages[i])
        {
            lowestAge = ages[i];
        }
    }

    // Calculate the average by dividing the sum by the length
    avg = sum / length;

    // Print the average
    printf("The average age is: %.2f\n", avg);
    // Print the lowest age
    printf("The Lowest age is %d", lowestAge);

    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
    }

    return 0;
}
