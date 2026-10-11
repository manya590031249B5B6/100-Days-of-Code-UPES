//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, start = 0, last = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ' ') {
            if(i > start)
                printf("%c.", str[start]);
            start = i + 1;
        }
        i++;
    }

    last = start;

    if(last < i) {
        printf("%s", str + last);
    }

    return 0;
}
