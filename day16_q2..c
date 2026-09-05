/*
Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>

int main() {
    int r,n,rev=0,num=0;
    printf("\nenter any number=");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;

    }
    if(rev==num)
printf("\ngiven no. is palindrome");
else
printf("\nGiven no. is not palindrome");
return 0;
}