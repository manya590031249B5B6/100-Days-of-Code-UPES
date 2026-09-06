/*
Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include<stdio.h>

int main() {
int r,i,j;
printf("\nEnter no. of rows=");
scanf("%d",&r);
for(i=r;i>=1;i--)
{
    
    for(j=1;j<=r-i;j++)
    {
        printf(" ");
    }
    for(j=1;j<=i;j++)
    {
        printf("*");
    }
printf("\n");
}
return 0;
}