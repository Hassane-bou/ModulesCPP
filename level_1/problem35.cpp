#include <iostream>

using namespace std;

int main()
{
    float pennis,Nickels,Dimes,Quarters,Dollars;

    cout << "Please enter pennis: ";
    cin >> pennis;
    cout << "Please enter Nickels: ";
    cin >> Nickels;
    cout << "Please enter Dimes: ";
    cin >> Dimes;
    cout << "Please enter Quarters: ";
    cin >> Quarters;
    cout << "Please enter Dollars: ";
    cin >> Dollars;

    float totalPennis = (pennis * 1) + (Nickels * 5) + (Dimes * 10) + (Quarters * 25) + (Dollars * 100);

    float totalDollars = totalPennis / 100;

    cout << totalPennis << " Pennies" << endl;
    cout << totalDollars <<  " Dollars" << endl;

    return 0;
}