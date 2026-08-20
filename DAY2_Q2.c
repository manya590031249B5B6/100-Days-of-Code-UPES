#include<stdio.h>

int main() {
float n1,n2,sum,diff,product,quotient;
printf("\nEnter any two no.=");
scanf("%f %f",&n1,&n2);

sum=n1+n2;
printf("\nSum of  two no. is %f",sum);


diff =n1-n2;
printf("\nDifference of two no. is %f", diff);


product =n1*n2;
printf("\nProduct of two no.is %f",product);


quotient = n1/n2;
printf("\nDivision of two no. is %f",quotient);

return 0;
}