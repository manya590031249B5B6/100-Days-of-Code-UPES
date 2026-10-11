//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>

int main() {
    char str[100], temp;
    int i = 0, j;

    scanf("%99s", str);

    while(str[i] != '\0') {
        i++;
    }

    j = i - 1;

    for(i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("%s", str);

    return 0;
}
