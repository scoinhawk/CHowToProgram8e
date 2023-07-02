#include <iostream>
#include <string>
#include <cmath>

int main(){
    
    std::cout << "Hello World!" << std::endl;
    std::cout << "Welcome to C++ Programming!" << std::endl;
    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;
    std::cout << "Welcome to C++ Programming, " << name << "!" << std::endl;
    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;
    std::cout << "You entered " << number << std::endl;
    std::cout << "Enter another number: ";
    int number2;
    std::cin >> number2;
    std::cout << "You entered " << number2 << std::endl;
    std::cout << "The sum of " << number << " and " << number2 << " is " << number + number2 << std::endl;
    std::cout << "The product of " << number << " and " << number2 << " is " << number * number2 << std::endl;
    std::cout << "The difference of " << number << " and " << number2 << " is " << number - number2 << std::endl;
    std::cout << "The quotient of " << number << " and " << number2 << " is " << number / number2 << std::endl;
    std::cout << "The remainder of " << number << " and " << number2 << " is " << number % number2 << std::endl;
    std::cout << "The square of " << number << " is " << number * number << std::endl;
    std::cout << "The cube of " << number << " is " << number * number * number << std::endl;
    std::cout << "The square root of " << number << " is " << sqrt(number) << std::endl;
    std::cout << "The cube root of " << number << " is " << cbrt(number) << std::endl;
    std::cout << "The sine of " << number << " is " << sin(number) << std::endl;
    std::cout << "The cosine of " << number << " is " << cos(number) << std::endl;
    std::cout << "The tangent of " << number << " is " << tan(number) << std::endl;
    std::cout << "The log of " << number << " is " << log(number) << std::endl;
    
    
    return 0;




}