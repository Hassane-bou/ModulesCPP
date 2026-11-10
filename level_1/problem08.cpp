#include <iostream>

using namespace std;

int main()
{
    int Mark;
    cout << "Please enter a Mark:";
    cin >> Mark;

    if(Mark >= 50)
        cout << "PASS" << endl;
    else
        cout << "Fail" << endl;

    return 0;
}