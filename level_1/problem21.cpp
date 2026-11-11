#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float P =3.14;
    int L;
    cout << "Please enter L: ";
    cin >> L;

    float res = pow(L,2)/ (4 * P);

    cout << "circle area along the circumference: " << res << endl;

    return 0;
}