#include <iostream>

using namespace std;

int main()
{
    float BillValue;
    cout << "Please enter Bill Value: ";
    cin >> BillValue;

    float TotalBill  = BillValue * 1.1;
    TotalBill = TotalBill * 1.16;


    cout << TotalBill << endl;
    return 0;
}