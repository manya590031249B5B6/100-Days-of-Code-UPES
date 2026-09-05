/*
Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include<stdio.h>

int main() {
char character;
printf("\nEnter any character value=");
scanf("%c",&character);
if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u')
printf("\nGiven character is vowel");
else
printf("\nGiven character is consonant");
return 0;
} 