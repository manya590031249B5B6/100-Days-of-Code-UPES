/*
Q49: Write a program to print the following pattern:
5
45
345
2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/
#include<stdio.h>

int main() {
int n,r,i,j;
printf("\nEnter number=");
scanf("%d",&n);
for(i=1;i<=5;i++)
{
    r=1;
    for(j=1;j<=i;j++)
    {
        r=r*10;
    }
    printf("%d\n",n%r);
}
return 0;
}
        