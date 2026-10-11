//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>

int main() {
    char date[20];
    int dd, mm, yyyy;

    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if(mm == 4)
        printf("%02d-Apr-%04d", dd, yyyy);
    else
        printf("%02d/%02d/%04d", dd, mm, yyyy);

    return 0;
}
