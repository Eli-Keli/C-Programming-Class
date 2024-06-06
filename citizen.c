#include <stdio.h>
#include <stdbool.h>

int main() {
    int age;
    bool isCitizen;
    int inputCitizen;
    printf("\nEnter your age: ");
    scanf("%d", &age);

    printf("Are you a Kenyan citizen? (1 for Yes, 0 for No): ");
    scanf("%d", &inputCitizen);
    isCitizen = (inputCitizen == 1);

    if (isCitizen && age >= 18) {
        printf("\nYou are eligible to vote!");
    } else {
        printf("\nSorry. You are not eligible to vote.");
    }

    return 0;
}