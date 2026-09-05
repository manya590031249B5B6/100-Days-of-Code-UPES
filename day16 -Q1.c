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
    int n,rev=0,num,i=0;
    printf("\nEnter any binary no.=");
    scanf("%d",&num);
    int i=1;
while(num!=0)
{ 
    n=num%2;
    rev=rev+i*10;
    i=i*10;
    num=num/2;
}
printf("\nBinary representation of no. is %d",rev);
return 0;
}