/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/ 
#include<stdio.h>

int main() {
    float r,circumference,area;
    printf("\nEnter any value=");
    scanf("%f",&r);
    circumference=2*3.14*r;
    printf("\ncircumference of circle is %f",circumference);
    area=3.14*r*r;
    printf("\nArea of circle is %f",area);
    return 0;
}
