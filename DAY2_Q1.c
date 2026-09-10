/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>

int main() {
int length,breadth,area,perimeter;
printf("\nEnter length and breadth =");
scanf("%d %d",&length,&breadth);

area=length*breadth;
printf("\nArea of rectangle is %d",area);

perimeter=2*(length+breadth);
printf("\nPerimeter of rectangle is %d",perimeter);

return 0;
}