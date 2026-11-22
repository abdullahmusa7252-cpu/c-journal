/* Question 03: Employee Discount
A company plans to determine whether an employee is eligible for a yearly bonus. 
The program should take the employee's years of experience, current salary, and performance grade as input. 
An employee will receive a bonus only if they have at least(more than equal) 5 years of experience and a salary of less than Tk. 50,000. 
The program should display whether the employee is eligible for the bonus. (YES/NO) */

#include <stdio.h>

int main() {

    float experience;
    float salary;
    char grade;

    printf("Experience: ");
    scanf("%f",&experience);

    printf("Salary: ");
    scanf("%f",&salary);

    printf("Grade: ");
    scanf("%c", &grade);

    if(experience >= 5 && salary < 50000)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
