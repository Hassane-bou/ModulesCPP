#include <iostream>

using namespace std;

int main()
{
    int  LoanAmount = 0;
    int MonthlyPayment = 0;

    cout << "Please enter Loan Amount: ";
    cin >> LoanAmount;
    cout << "Please enter Monthly Amount: ";
    cin >> MonthlyPayment;

    int res = LoanAmount / MonthlyPayment;

    cout << res << " Months" << endl;

    return 0;

}