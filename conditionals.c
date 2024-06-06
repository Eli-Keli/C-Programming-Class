#include <stdio.h>
#include <stdbool.h>
int main() {
    int num;

    printf("Please Enter a number: ");
    scanf("%d", &num);

    printf("The address location is %p", &num);

    if (num%2 == 0){
        printf("\nThe number is even");
    } else {
        printf("\nThe number is odd");
    }

    if (num > 0){
        printf("\nThe number is Positive\n");
    } else {
        printf("\nThe number is Negative\n");
    }


    int amount;
    double discount;
    double pay;


    printf("\nPlease Enter the amount of items purchased: ");
    scanf("%d", &amount);

    if (amount > 5000){
        discount = 0.1 * amount;
        pay = amount - discount;
        printf("\nYour discount is %.2lf \nYou should pay $%.2lf", discount, pay);
    } else {
        printf("\nNo discount! \nYou should pay $%d", amount);
    }

    int age, income;

    printf("\nEnter your age: ");
    scanf("%d", &age);
    printf("\nEnter your annual income: ");
    scanf("%d", &income);

    if (age >= 21 && income >= 21000){
        printf("\nCongratulations! You qualify for a loan.");
    } else {
        printf("\nUnfortunately, you do not qualify to get a loan.");
    }


    return 0;
}