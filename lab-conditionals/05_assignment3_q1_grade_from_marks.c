/* 1. Write a code which takes input the number achieved by a student and prints his grade. (A+, A, etc) */
#include <stdio.h>

int main()
{
    float marks;
    printf("Enter your mark: ");
    scanf("%f", &marks);
    if (marks <= 100)
    {
        if (marks >= 80)
        {
            printf("Grade: A+");  
        }
        else if (marks >= 70)
        {
            printf("Grade: A");
        }
        else if (marks >= 60)
        {
            printf("Grade: A-");
        }
        else if (marks >= 50)
        {
            printf("Grade: B");
        }
        else if (marks >= 40)
        {
            printf("Grade: D");
        }
        else
        {
            printf("Grade: Failed");
        }

    }
    else 
    {
        printf("Please enter the value of mark no more than 100");
    }

    
}