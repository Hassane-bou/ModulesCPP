#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float NofS;

    cout << "Please enter number of seconds: ";
    cin >> NofS;

    float secondsPerDay = 24 * 60 * 60;
    float secondsPerhour = 60 * 60;
    float secondsPerMinute = 60;

    float remainder;

    float days = floor(NofS / secondsPerDay);
    remainder = (int)NofS % (int)secondsPerDay;
    float hours = floor(remainder / secondsPerhour);
    remainder = (int)NofS % (int)secondsPerhour;
    float minutes = floor(remainder / secondsPerMinute);
    remainder = (int)NofS % (int)secondsPerMinute;
    float seconds = remainder;

    cout << days << ":" << hours << ":" << minutes << ":" << seconds <<  endl;



    return 0;
}