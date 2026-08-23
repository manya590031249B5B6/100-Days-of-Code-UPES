/*
Q8: Write a program to find and display the sum of the first n natural numbers.


Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include<stdio.h>

int main() {
    int n,sum=0,i=0;
    printf("\nEnter any natural no. limit=");
    scanf("%d",&n);
    while(++i<=n) 
    {
    sum=i+sum;
    printf("\nSum of natural limit is %d",sum);
        }
            return 0;
}

