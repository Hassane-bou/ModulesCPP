#include <iostream>

using namespace std;

int main()
{
    float a,b,h;

    cout << "Please enter a: ";
    cin >> a;
    cout << "Please enter h: ";
    cin >> h;

    float res = a/2 * h;

    cout <<  "Traingle area: " <<  res << endl;

    return 0;
}