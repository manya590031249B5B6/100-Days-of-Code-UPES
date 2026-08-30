/*
Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include<stdio.h>

int main() {
int n,original,remainder,result;
printf("\nEnter a number=");
scanf("%d",&n);
original=n;

while(original!=0) {
remainder=original%10;
result=remainder*remainder*remainder;
original=original/10;
}


if(result == n)
printf("\nArmstrong");
else
printf("\nNot armstrong");

return 0;
}

