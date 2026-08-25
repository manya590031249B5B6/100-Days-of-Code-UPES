/*
Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include<stdio.h>
#include<math.h>

int main() {
float a,b,c,r1,r2,D,r;
printf("\nEnter any three no.=");
scanf("%f %f %f",&a,&b,&c);
D=b*b-4*a*c;
if (D>0)
{
r1=(-b-sqrt(D))/2*a;
r2=(-b+sqrt(D))/2*a;
printf("\nReal and postive is %f %f",r1,r2);
}
else if(D==0)
{
r=-b/2*a;
printf("\nReal and equal roots is %f",r);
}
else
printf("\nIamginary roots");
return 0;
}



