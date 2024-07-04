/*
Author: Eli Keli
Date: July 4
Description: C Structures
Registration Number: BSE-05-0238/2023
*/

#include <stdio.h>
#include <string.h>

//Create struct using typedef with person1 variable
typedef struct Person
{
    char name[30];
    int age;
    float salary;
} person1;

//EXCERCISE: Create a C structure named Student
typedef struct Student
{
    char firstName[30];
    char lastName[30];
    char email[50];
    char regNo[20];
    char dob[20];
    int age;
    char phoneNumber[20];
} student1;

int main() {
    // Assign pers name alias to person1
    person1 pers;

    // Assign values to pers variable
    pers.age = 50;
    pers.salary = 5000.0;
    strcpy(pers.name, "John Much");

    printf("Name is: %s\n", pers.name);
    printf("Age is: %d\n", pers.age);
    printf("Salary is: %.2f\n", pers.salary);

    // Assign stu name alias to student1
    student1 stu;

    // Assign values to stu variable
    strcpy(stu.firstName, "Eli");
    strcpy(stu.lastName, "Keli");
    strcpy(stu.email, "muthokaelikeli@gmail.com");
    strcpy(stu.dob, "11/11/2005");
    strcpy(stu.phoneNumber, "+254742560540");
    strcpy(stu.regNo, "BSE-05-0238/20");
    stu.age = 18; 

    printf("First Name: %s\n", stu.firstName);
    printf("Last Name: %s\n", stu.lastName);
    printf("Email: %s\n", stu.email);
    printf("D.O.B: %s\n", stu.dob);
    printf("Phone Number: %s\n", stu.phoneNumber);
    printf("Registration Number: %s\n", stu.regNo);
    printf("Age: %d\n", stu.age);

    return 0;
}
