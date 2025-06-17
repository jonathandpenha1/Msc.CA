/*

 WAP to accept a string and check wheather the given string is a palindrome or not.
 
 date: 27th August 2024
 PRN:23030142005
 */

#include <iostream.h>
#include <conio.h>
#include <string.h>

void main() {
    clrscr();

    char str[100], rev[100];

    cout << "Enter a string: ";
    cin >> str;

    strcpy(rev, str);  // Copy the original string to rev
    strrev(rev);       // Reverse the string using strrev

    if (strcmp(str, rev) == 0) {
        cout << "The string \"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "The string \"" << str << "\" is not a palindrome." << endl;
    }

    getch();
}