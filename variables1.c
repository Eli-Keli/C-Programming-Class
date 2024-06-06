#include <stdio.h>

int main() {
    int days;
    float hours;
    double minutes;
    char h;
    // days = 7;
    // hours = 16.7;
    // minutes = 2456.46;
    // h = 'h';
    
    
    printf("Enter the number of days: \n");
    scanf("%d", &days);

    printf("Enter the number of hours: \n");
    scanf("%f", &hours);

    printf("Enter the number of minutes: \n");
    scanf("%lf", &minutes);
    
    getchar();

    printf("Enter the value of any character: \n");
    scanf("%c", &h);


    printf("The value of hours is %.2f \n", hours);
    printf("The value of minutes is %.3lf \n", minutes);
    printf("The value of character is %c", h);
    return 0;
}