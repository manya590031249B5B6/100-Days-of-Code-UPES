/*
45 write program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include<stdio.h>

int main() {
    float sum=0,numerator,denominator;
    int n,i=1;
    printf("\nenter series=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        numerator=2*i;
        denominator=4*i-1;
        sum=sum+numerator/denominator;
       }
    printf("\nApproximation sum=%.2f",sum);

    return 0;
}











}