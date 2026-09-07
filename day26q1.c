/*
Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
                                                                                                                                                                                     
/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include<stdio.h>

int main() {
int n,r,i,j;
printf("\nenter any no. of rows=");
scanf("%d",&n);

r=1;

for(i=1;i<=n;i++)
{
    printf("\n");

for(j=i;j<n;j++)
{
    printf(" ");
}
r=r*10;

printf("%d",12345%r);
}
return 0;
}