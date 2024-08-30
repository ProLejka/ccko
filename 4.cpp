#include <iostream>

using namespace std;

// Create a program that checks if a number is even or odd.
// Write a program to find the largest of three numbers using if-else statements.

int main()
{
    int cislo1 = 55;

    if(cislo1 % 2 == 1) {
        cout << "is odd" << endl;
    }
    else {
        cout << "is even" << endl;
    }

    int cislo2 = 10;
    int cislo3 = 11;

    if (cislo1 >= cislo2 && cislo1 >= cislo3 ) {
        cout << cislo1 << endl;
    }
    else if (cislo2 >= cislo1 && cislo2 >= cislo3 ) {
        cout << cislo2 << endl;
    }
    else {
        cout << cislo3 << endl;
    }
}