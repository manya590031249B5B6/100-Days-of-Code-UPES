/*
Q47: Write a program to print the following pattern:
*
**
***
****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include<stdio.h>

int main() {
int i=0,j;
while(++i<=5)
{
    j=0;
    printf("\n");
        while(++j<=i)
        printf("* ");
}
return 0;
}