#include <iostream>

using namespace std;

int main()
{
    int Number1,Number2;
    cout << "Please enter two Numbers: ";
    cin >> Number1;
    cin >> Number2;
    cout << endl;
    if(Number1 > Number2)
        cout << Number1 << endl;
    else
        cout << Number2 << endl;

    return 0;
}