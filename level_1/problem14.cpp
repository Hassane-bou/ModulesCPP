#include <iostream>

using namespace std;

int main()
{
    int number1,number2;
    int temp;
    cout << "Please enter number1: ";
    cin >> number1;
    cout << "Please enter number2: ";
    cin >> number2;

    cout << "befor: " << "number1=" << number1 << " ,number2=" << number2 << endl;
    temp = number1;
    number1 = number2;
    number2 = temp;

    cout << "after: " << "number1=" << number1 << " ,number2=" << number2 << endl;

    return 0;
}