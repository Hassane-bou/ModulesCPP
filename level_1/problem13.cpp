#include <iostream>

using namespace std;


int main()
{
    int A,B,C;

    cout << "Please enter tree Numbers: ";
    cin >> A;
    cin >> B;
    cin >> C;

    cout << endl;

    if(A > B)
    {
        if(A > C)
            cout << A << endl;
        else
            cout << C << endl;
    }
    else if(B > C)
        cout << B << endl;

    return 0;
}