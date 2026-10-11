//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], temp[200];
    int i, j, found = 0;

    scanf("%99s %99s", a, b);

    if(strlen(a) != strlen(b)) {
        printf("Not rotation");
        return 0;
    }

    strcpy(temp, a);
    strcat(temp, a);

    for(i = 0; temp[i] != '\0'; i++) {
        for(j = 0; b[j] != '\0'; j++) {
            if(temp[i + j] != b[j])
                break;
        }

        if(b[j] == '\0') {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
