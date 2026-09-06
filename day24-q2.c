/*
Q48: Write a program to print the following pattern:
1
12
123
1234
12345

/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include<stdio.h>

int main() {
    int r,i=0,j;
    printf("\nEnter no. of rows=");
    scanf("%d",&r);
    while(++i<=r)
    {
        j=0;
        printf("\n");
            while(++j<=i)
            {    
            printf("%d",j);
            }

    }
return 0;
}