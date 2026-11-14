#include <iostream>

using namespace std;

int main()
{
    float days,hours,minutes,seconds;
    float res;
    cout << "Please enter days: ";
    cin >> days;
    cout << "Please enter hours: ";
    cin >> hours;
    cout << "Please enter minutes: ";
    cin>> minutes;
    cout << "Please enter seconds: ";
    cin >> seconds;

    
    res = days * 24 * 60 * 60;
    res += hours * 60 * 60;
    res += minutes * 60;
    res += seconds;

    cout << res << " Seconds" << endl;

    return 0;
}