/*
Program(2)- Write a program to make use of basic Input/Output functions using different data types.
Solution(2)-User Define Values
*/

#include <stdio.h>

int main() 
{
    int rollnum;
    float per;
    char grade;
     printf("\n Enter STudent Roll NUmber: ");
     scanf(" %d", &rollnum);
     printf("\n Enter Student Percentage: ");
     scanf(" %f", &per);
     printf("\n Enter STUdent Grade: ");
     scanf(" %c",& grade);
      
      printf("-----Student information-----\n");
    printf("\n Roll number is : %d",rollnum);
    printf("\n Percentage is : %f",per);
    printf("\n Grade is : %c",grade);

    return 0;
    }
    
