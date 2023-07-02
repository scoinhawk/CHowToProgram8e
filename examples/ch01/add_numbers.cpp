#include <stdio.h>
#include <iostream>
#include <cmath>


using namespace std;

int main() {

    int num1{0}, num2{0};

    cout << "This is a calculator to add two numbers.\n";
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Sum of two numbers is: " << num1 + num2 << endl;

    cout << "The product of two numbers is: " << num1 * num2 << endl;


    return 0;
}