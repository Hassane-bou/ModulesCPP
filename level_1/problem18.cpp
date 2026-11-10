#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int r;
    const float p = 3.14;

    cout << "Please enter r: ";
    cin  >> r;

    float res = p * (pow(r,2));

    cout << "Circle area: " << res << endl;


    return 0;
}