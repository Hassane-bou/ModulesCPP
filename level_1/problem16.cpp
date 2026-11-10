#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,d;
    float res;
    cout << "Please enter a: ";
    cin >> a;
    cout << "Please enter d: ";
    cin >> d;

    res = a * sqrt(pow(d,2) - pow(a,2));

    cout << "res: " << res << endl;

    return 0;
 

}