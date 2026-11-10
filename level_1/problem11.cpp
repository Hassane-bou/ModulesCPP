#include <iostream>

using namespace std;

int main()
{
    int Mark1,Mark2,Mark3,avg;
    cout << "Please enter Tree Marks: ";
    cin >> Mark1;
    cin >> Mark2;
    cin >> Mark3;
    cout << endl;
    avg = (Mark1 + Mark2 + Mark3) / 3;
    cout << avg << endl;

    if(avg >= 50)
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;
    return 0;

}