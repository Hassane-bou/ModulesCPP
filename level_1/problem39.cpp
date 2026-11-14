#include <iostream>

using namespace std;

int main()
{
    int TotalBill,CashPaid;

    cout << "Please enter TotalBill:";
    cin >> TotalBill;
    cout << "Please enter Cash Paid:";
    cin >> CashPaid;

    cout << CashPaid - TotalBill << endl;

    return 0;
}