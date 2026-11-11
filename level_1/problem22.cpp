#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int a,b;
    const float P = 3.14;
    
    cout << "Please enter a: ";
    cin >> a;
    cout << "Please enter b: ";
    cin >> b;

    float part1 = P * pow(b,2) / 4;
    float part2 =  (2 * a - b) / (2 * a + b);
    float res = part1 * part2;

    cout << "Circle area Inscribed in an Isosceles Traingle: " << res << endl;

    return 0;
}