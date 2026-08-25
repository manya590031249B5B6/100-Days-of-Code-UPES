/*
Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include<stdio.h>

int main() {
int n;
printf("\n\tMenu");
printf("\nEnter choice=");
scanf("%d",&n);
switch(n)
{


case1 :
printf("monday");
break;
case2 :
printf("tuesday");
break;
case3 :
printf("Wednesday");
break;
case4 :
printf("Thursday");
break;
case5 :
printf("Friday");
break ;
case 6 :
printf("Saturday");
break;
case7 :
printf("sunday");
break ;

deafault :
printf("Wrong choice");
}
 return 0;
}



