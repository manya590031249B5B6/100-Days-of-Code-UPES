/*
Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3g
Output 2:
1 2 3

*/
#include<stdio.h>

int main() {
int i=1,n,ctr=0,count=0;
printf("\nEnter any number=");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    printf("\nCounting is %d",i);
}
return 0;
}