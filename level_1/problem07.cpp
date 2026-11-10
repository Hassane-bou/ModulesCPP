#include <iostream>

using namespace std;

int main()
{
    int Number;
    int Res;
    cout << "Please enter a number:" << endl;
    cin >> Number;

    Res = Number / 2;

    cout << "Half of " << Number << " is " << Res << endl;
    return 0;
}