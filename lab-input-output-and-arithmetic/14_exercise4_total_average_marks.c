//4. Write a C program to enter marks of five subjects and calculate total and average marks
#include <stdio.h>

int main(){
    float math,chem,phy,ict,bio,avg;
    printf("Enter marks for Mathematics: ");
    scanf("%f", &math);
    
    printf("Enter marks for Chemistry: ");
    scanf("%f", &chem);

    printf("Enter marks for Physics: ");
    scanf("%f", &phy);

    printf("Enter Marks for Information and Communication Technoloogy: ");
    scanf("%f", &ict);

    printf("Enter Marks for Biology: ");
    scanf("%f", &bio);

    avg = (math + chem + phy +ict + bio) / 5 ;
    printf("So your avg marks are: %f", avg);

    return 0;
}