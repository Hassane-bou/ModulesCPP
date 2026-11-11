#include <iostream>
#include <cmath>


using namespace std;


int main()
{
    int a,b,c;
    const float P = 3.14;

    cout << "Please enter a: ";
    cin >> a;
    cout << "Please enter b: ";
    cin >> b;
    cout << "Please enter c: ";
    cin >> c;

    float p = (a + b + c) / 2;

    float res = P *  pow((a * b * c) / (4 * sqrt(p * ( p - a) *(p - b) * (p - c))),2);

    cout << "circle area circle  described around en arbitrary traingle: " << res << endl;

    return 0;

}