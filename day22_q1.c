/*
Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>

int main() {
int n,sum=0,i,temp1,fact,digit;
printf("\nenter any number=");
scanf("%d",&n);
temp1=n;

while(temp1!=0) 
{
digit=temp1%10;
    fact=1;
   for(i=1;i<=digit;i++)
   {

   
    fact=fact*i;
  }   
sum=sum+fact;
temp1=temp1/10;
}

if(sum==n)
printf("\nStrong Number");
else
printf("\nNot strong number");
return 0;
}   