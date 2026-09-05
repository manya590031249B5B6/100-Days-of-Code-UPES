/*
Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include<stdio.h>

int main() {
    int choice;

    printf("\n\tMenu");
printf("Enter choice=");
scanf("%d",&choice);

if(choice>=1 && choice<=12)
switch(choice)
{
case 1:
printf("\njanuary with 31 days");
break ;
case 2:
printf("\nFebruary with 28 days");
break ;
case3 :
printf("\nMarch with 31 days");
break ;
case 4:
printf("\nApril with 30 days");
break ;
case 5:
printf("\nMay with 31 days");
break ;
case 6 :
printf("\nJune with 30 days");
break;
case 7 :
printf("\nJuly with 31 days");
break ;
case 8:
printf("\nAugust with 31 days");
break ;
case 9 :
printf("\nSeptember with 30 days");
break ;
case 10:
printf("\noctober in 31  days");
break ;
case 11 :
printf("\nNovember with 30 days");
break ;
case 12 :
printf("\nDecember with 31 days");
break;
}
else 
printf("\nWrong choice");

return 0;
}