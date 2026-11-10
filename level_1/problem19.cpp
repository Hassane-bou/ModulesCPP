#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int D;
    const float p = 3.14;

    cout << "Please entre D: ";
    cin >> D;

    float res = (p * pow(D,2))/ 4;

    cout << "Circle area throught diameter: " << res << endl;

    return 0;
}