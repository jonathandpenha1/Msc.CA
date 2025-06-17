/*

 WAP to create a class product with data members pid, pname, qty, price.
 Write a member function to accept and display product information also 
 display number of objects created using product class 
 (use static data members and static member function)
 
 date: 27th August 2024
 PRN:23030142005
 */

#include <iostream.h>
#include <conio.h>

class Product {
private:
    int pid;
    char pname[50];
    int qty;
    float price;
    static int count;  // Static data member to keep track of the number of objects

public:
    // Member function to accept product information
    void acceptDetails() {
        cout << "Enter Product ID: ";
        cin >> pid;
        cout << "Enter Product Name: ";
        cin >> pname;
        cout << "Enter Quantity: ";
        cin >> qty;
        cout << "Enter Price: ";
        cin >> price;
        count++;  // Increment count whenever a new object is created
    }

    // Member function to display product information
    void displayDetails() {
        cout << "Product ID: " << pid << endl;
        cout << "Product Name: " << pname << endl;
        cout << "Quantity: " << qty << endl;
        cout << "Price: " << price << endl;
    }

    // Static member function to display the number of objects created
    static void showCount() {
        cout << "Total number of products created: " << count << endl;
    }
};

// Initialize the static data member outside the class definition
int Product::count = 0;

void main() {
    clrscr();

    Product p1, p2;

    cout << "Enter details of product 1:" << endl;
    p1.acceptDetails();
    cout << "\nDetails of product 1:" << endl;
    p1.displayDetails();

    cout << "\nEnter details of product 2:" << endl;
    p2.acceptDetails();
    cout << "\nDetails of product 2:" << endl;
    p2.displayDetails();

    // Display the total number of products created
    Product::showCount();

    getch();
}
