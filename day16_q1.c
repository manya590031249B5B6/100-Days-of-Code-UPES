/*
Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111
*/
#include<stdio.h>

int main() {
int n,d,rev=0;
printf("\nEnter any binary no.=");
scanf("%d",&n);
{
while(n!=0)
d=n%2;
rev=rev*10+d;
n=n/2;
}
printf("\nBinary equivalent is %d",rev);
return 0;
}