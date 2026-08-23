/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.


Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>

int main() {
    int temp,temp1;
    printf("\nEnter any value=");
    scanf("%d",&temp);
    temp1=temp*9/5+32;
    printf("\nTemperature in farenhiet is %d",temp1);
    return 0;
} 
