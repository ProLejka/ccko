#include <iostream>

using namespace std;

//     Loops:
//         Write a program to print the multiplication table of a given number using a for loop.
//         Create a program that calculates the sum of the first n natural numbers using a while loop.
//         Write a program to reverse the digits of an integer.

int reverseInteger(int number)
{
    int resultNumber{0};
    while (number != 0)
    {
        int digit = number % 10;
        resultNumber = resultNumber * 10 + digit;
        number /= 10;
    }
    return resultNumber;
}

int main()
{
    int theNumber{9};
    for (int i = 0; i <= 10; i++)
    {
        cout << theNumber << "*" << i << "=" << theNumber * i << endl;
    }

    int startNumber{0};
    int resultNumber{0};
    while (startNumber <= theNumber)
    {
        resultNumber += startNumber;
        startNumber++;
    }
    cout << resultNumber << endl;

    cout << reverseInteger(123456) << endl;
}