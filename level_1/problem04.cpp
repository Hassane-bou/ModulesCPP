#include <iostream>

using namespace std;

int main()
{
    int age;
    bool HasDriverlicense = true;

    cout << "Please enter your age: ";
    cin >> age;
    cout << "Do you Have a Driver License: ";
    cin >> HasDriverlicense;

    if(age > 21 && HasDriverlicense)
        cout << "Hired\n";
    else
        cout << "Rejected\n";
}