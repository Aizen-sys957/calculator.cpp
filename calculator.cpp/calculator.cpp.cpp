// calculator.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "enter first number:";
    cin >> a;

    cout << "enter the second number:";
    cin >> b;

    char mathsign;
    cout << "enter the mathematical sign(+,-,*,/):";
    cin >> mathsign;

    if (mathsign == '+') {
        int sum = a + b;
        cout << "your sum is :" << sum << '\n';
    }

    if (mathsign == '-') {
        int sub = a - b;
        cout << "your sub is :" << sub << '\n';
    }


    if (mathsign == '*') {
        int multiply = a * b;
        cout << "your multipliction is:" << multiply << '\n';

    }


    if (mathsign == '/') {
        int division = a / b;
        cout << "your div is :" << division << '\n';

    }
    return 0;


}



