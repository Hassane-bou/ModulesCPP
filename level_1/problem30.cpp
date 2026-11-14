#include <iostream>

using namespace std;

int main()
{
    int N;
    int res = 1;
    do{
        cout << "Please enter N :";
        cin >> N;
        if(N < 0)
            cout << "Factorial must be positive number.\n";
    }while(N < 0);

    if(N == 0 || N == 1 || N == 2)
    {
        res = 1;
        cout << res << endl;
    }
    else
    {
        for(int i = N; i > 1 ;i--)
        {
            res *= i;
        }
        cout << res << endl;
    }
    return 0;

}