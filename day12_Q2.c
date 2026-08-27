/*
5Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include<stdio.h>

int main() {
int n,bill=0;
printf("\nEnter any units=");
scanf("%d",&n);
 if(n<=100)
{
bill=n*5;
printf("\nCost of first 100 units is %d",bill);
}
else if(n<=200)
 {
 bill=(100*5+(200-n)*7);
 printf("\nCost of second 100 units is %d",bill);
 }
else if(n<=300)
{
bill=(100*5+100*7+(300-n)*10);
printf("\ncost of third 100 unit is %d",bill);
}
else 
{
printf("above rupees 12 unit");
}
return 0;
}
