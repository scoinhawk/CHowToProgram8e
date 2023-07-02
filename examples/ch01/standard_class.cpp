#include <iostream>
#include <string>
using namespace std;

int main() {

    string username{"John Doe"};
    int age{0};
    int num1{0}, num2{0};

    cout << "Enter your name: ";
    getline(cin, username);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your name is: " << username << endl;
    cout << "Your age is: " << age << endl;

    string str1{"Hello"};
    string str2{"World"};
    string str3{str1 + " " + str2};
    cout << str3 << endl;
    cout << "The length of str3 is: " << str3.length() << endl;
    cout << "The size of str3 is: " << str3.size() << endl;
    cout << "The capacity of str3 is: " << str3.capacity() << endl;
    cout << "The max size of str3 is: " << str3.max_size() << endl;
    cout << "The empty status of str3 is: " << str3.empty() << endl;
    cout << "The first character of str3 is: " << str3[0] << endl;
    cout << "The first character of str3 is: " << str3.at(0) << endl;
    cout << "The last character of str3 is: " << str3[str3.length() - 1] << endl;
    cout << "The last character of str3 is: " << str3.at(str3.length() - 1) << endl;
    cout << "The substring of str3 is: " << str3.substr(0, 5) << endl;
    cout << "The substring of str3 is: " << str3.substr(6, 5) << endl;
    cout << "The substring of str3 is: " << str3.substr(0, 11) << endl;
    cout << "The substring of str3 is: " << str3.substr(6) << endl;
    cout << "The substring of str3 is: " << str3.substr(6, 100) << endl;
    cout << "\n\nThe comparison of str1 and str2 is: " << str1.compare(str2) << endl;
    cout << "The comparison of str2 and str1 is: " << str2.compare(str1) << endl;
    cout << "The comparison of str1 and str1 is: " << str1.compare(str1) << endl;
    cout << "The comparison of str2 and str2 is: " << str2.compare(str2) << endl;
    cout << "The comparison of str3 and str1 is: " << str3.compare(str1) << endl;
    
    return 0;
}