#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float A;

    const float P = 3.14;

    cout << "Please enter A: ";
    cin >> A;

    float res = P * (pow(A,2)/pow(2,2));

    cout << "Circle area inscribed in a square: " << res << endl;

    return 0;
}