/*
Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include<stdio.h>

int main() {
int n1,n2,n3,h;
printf("\nEnter any  three no.'s=");
scanf("%d %d %d",&n1,&n2,&n3);
if(n1==n2 && n2==n3)
printf("\nAll are Equal");
else 
    if(n1>n2)
    h=n1;
    else
    h=n2;
    if(n3>h)
    h=n3;

    printf("\nLargest is %d",h);
return 0;
}
