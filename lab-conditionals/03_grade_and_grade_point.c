#include <stdio.h>

int main() {
    int marks;
    const char *grade;
    float point;

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Enter 0 to 100.\n");
        return 0;
    }

    if (marks >= 80) {
        grade = "A+";
        point = 4.00;
    } else if (marks >= 75) {
        grade = "A";
        point = 3.75;
    } else if (marks >= 70) {
        grade = "A-";
        point = 3.50;
    } else if (marks >= 65) {
        grade = "B+";
        point = 3.25;
    } else if (marks >= 60) {
        grade = "B";
        point = 3.00;
    } else if (marks >= 55) {
        grade = "B-";
        point = 2.75;
    } else if (marks >= 50) {
        grade = "C+";
        point = 2.50;
    } else if (marks >= 45) {
        grade = "C";
        point = 2.25;
    } else if (marks >= 40) {
        grade = "D";
        point = 2.00;
    } else {
        grade = "F";
        point = 0.00;
    }

    printf("Marks: %d\n", marks);
    printf("Grade: %s\n", grade);
    printf("Grade point: %.2f\n", point);

    return 0;
}