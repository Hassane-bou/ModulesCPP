#include <iostream>

using namespace std;

int main()
{
    float NofH;
    float Weeks;
    float Days;

    cout << "please enter number of hours: ";
    cin >> NofH;

    Weeks = NofH / 24 / 7;
    Days = NofH / 24;
    cout << Weeks << endl;
    cout << Days << endl;

    return 0;

}