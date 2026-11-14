#include <iostream>

using namespace std;

int main()
{
    int res = 0;
    int number = 0;
    do{
        res += number;
        cout << "Enter number: ";
        cin >> number;
    }while(number != -99);

    cout << res << endl;
    return 0;
}