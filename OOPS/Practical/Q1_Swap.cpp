/*

 WAP a program to swap numbers without using 3rd variable
 date: 27th August 2024
 PRN:23030142005
 */
 
#include <iostream.h>
#include <conio.h>

void main() {
    clrscr();
    
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    getch();
}
