/*
Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include<stdio.h>

int main() {
    int n,i,sum=0,count;
printf("\nEnter any no.=");
scanf("%d",&n);
i=1;
for(count=1;count<=n;count++)
{

    sum=sum+i;
    i=i+2;
}
    printf("\nSum of n natural no. is %d",sum);
return 0;
}