/*
Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include<stdio.h>

int main() {
int n=5,i,j,h;

h=1;

for(i=1;i<=n;i++) {
    for(j=1;j<=h;j++)
    {
        printf("* ");
    }
    printf("\n");
        h=h+2;
}

h=h-4;

for(i=1;i<=n-1;i++)
{
    for(j=1;j<=h;j++) {
        printf("* ");
    }
    printf("\n");
    h=h-2;
}

return 0;
}