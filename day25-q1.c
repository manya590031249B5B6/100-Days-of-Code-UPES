/*
Q49: Write a program to print the following pattern:
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
    int r,i,j;
    printf("\nEnter no.of rows=");
    scanf("%d",&r);
    while(--i<=r)
    {
        printf("\n");
            while(++j<=i)
            {
                printf("%d",j);
            }

            }
return 0;
        }