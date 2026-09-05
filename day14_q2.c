/*
Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include<stdio.h>

int main() {
int n,count=0,i,product=0;
printf("\nEnter any number=");
scanf("%d",&n);
i=0;
for(count=0;count<=n;count++)
{
    product=product*i;
    i=i+2;
}
printf("\nProduct of any no. is %d",product);
return 0;
}