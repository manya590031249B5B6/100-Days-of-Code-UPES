/*
44 Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include<stdio.h>

int main() { 
    float sum=1,numerator,denominator;
    int n,i=2;
    printf("\nenter any number=");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
         numerator=2*i-1;
        denominator=2*i;
    
    sum=sum+numerator/denominator;
    }
    printf("\nApproximation sum=%.1f",sum);
}