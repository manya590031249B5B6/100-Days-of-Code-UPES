/*
Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>

int main() {
float sp,cp,percentage;
printf("\nEnter any two number=");
scanf("%f %f",&sp,&cp);
if(sp>cp)
{
percentage=((sp-cp)*100)/cp;
printf("\nprofit percentage is %f",percentage);
}
else if(cp>sp)
{
percentage=((cp-sp)*100)/cp;
printf("\nloss percentage is %f",percentage);
}
else 
{
printf("\nNo profit no loss");
}
return 0;
}