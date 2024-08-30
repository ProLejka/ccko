#include <iostream>

using namespace std;

// Write a program that takes two numbers as input and performs addition, subtraction, multiplication, division, and modulus operations on them

int main()
{
    int cislo1 = 10;
    int cislo2 = 3;

    float test = (float)cislo1 / cislo2;

    cout << cislo1 + cislo2 << endl;
    cout << cislo1 - cislo2 << endl;
    cout << cislo1 * cislo2 << endl;
    cout << test << endl;
    cout << cislo1 % cislo2 << endl;
}