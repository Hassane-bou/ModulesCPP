#include <iostream>

using namespace std;


int main()
{
    int number;
    cout << "Please enter number: ";
    cin >> number;

    if(number % 2 == 0)
        cout << "EVEN\n";
    else
        cout << "ODD\n";

    return 0;

}