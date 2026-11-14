#include <iostream>

using namespace std;


int main()
{
    int totalSales;
    int commission;
    cout << "Please enter TotalSales: ";
    cin >> totalSales;

    if(totalSales > 1000000)
        totalSales = totalSales * 1/100;
    else if(totalSales > 500000)
        totalSales = totalSales * 2/100;
    else if(totalSales > 100000)
        totalSales = totalSales * 3/100;
    else if(totalSales > 50000)
        totalSales = totalSales * 5/100;
    else
        totalSales;

    cout << totalSales << endl;

    return 0;
}