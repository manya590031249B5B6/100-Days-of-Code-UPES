/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>

int main() {
int n1,n2,sum,diff,product,quotient;
printf("\nEnter any two no.=");
scanf("%d %d",&n1,&n2);
sum=n1+n2;
printf("\nSum of two no. is %d",sum);
diff=n1-n2;
printf("\nDifference of two no. is %d",diff);
product=n1*n2;
printf("\nProduct of two no. is %d",product);
quotient=n1/n2;
printf("\ndivison of two no. is %d",quotient);
return 0;
}
