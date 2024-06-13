/*
Author: Eli Keli
Date: June 13
Description: Library System
Registration Number: BSE-05-0238/2023
*/

#include <stdio.h>

int main()
{

    int bookId, dueDate, returnDate, overdueDays, fine;

    // Prompt the user for the book ID
    printf("Book ID: ");
    scanf("%d", &bookId);

    // Prompt the user for the due date
    printf("\nDue Date: ");
    scanf("%d", &dueDate);

    // Prompt the user for the return date
    printf("\nReturn Date: ");
    scanf("%d", &returnDate);

    // Calculate the number of overdue days
    overdueDays = returnDate - dueDate;

    // Determine the fine based on the number of overdue days
    if (overdueDays <= 7 && overdueDays > 0)
    {
        fine = overdueDays * 20; // $20 per day for up to 7 days
    }
    else if (overdueDays <= 14)
    {
        fine = overdueDays * 50; // $50 per day for 8 to 14 days
    }
    else
    {
        fine = overdueDays * 100; // $100 per day for more than 14 days
    }

    printf("\nDays Overdue: %d\nFine: $%d", overdueDays, fine);

    return 0;
}
