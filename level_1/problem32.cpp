#include <iostream>

using namespace std;

int main()
{
    int Number =1;
    int M;
    int res = 1;
    cout << "Please enter Number: ";
    cin >> Number;
    cout << "Please enter M: ";
    cin >> M;

    for(int i = 1; i <= M;i++)
    {
        res *= Number;
    }
    cout << res << endl;

    return 0;

}