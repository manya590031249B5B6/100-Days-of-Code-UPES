/*
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h>

int main() {
int n1,n2,sum,diff,product,div,mod,choice;
printf("\nEnter any two number=");
scanf("%d %d",&n1,&n2);
printf("\nEnter choice(1-5)=");
scanf("%d",&choice);

if(choice>=1 && choice<=5)
switch(choice)
{
    case 1:
    sum=n1+n2;
    printf("\nAddition of two no. is %d,sum");
    break;
    
    case 2:
    diff=n1-n2;
    printf("\nDifference of two no. is %d",diff);
    break;

    case 3:
    product=n1*n2;
    printf("\nProduct of two no. is %d",product);
    break;

    case 4:
    div=n1/n2;
    printf("\nDivision of two no. is %d",div);
    break;

    case 5:
    mod=n1%n2;
    printf("\nremainder of two no. is %d",mod);
    break;
}
else
printf("\nWrong choice");
return 0;
}