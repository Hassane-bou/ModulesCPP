#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    int res = 0;
    cout << "Please enter N: ";
    cin >> N;

    for(int i = 0; i <= N ;i++)
    {
        if(i % 2 != 0)
            res += i;
    }
    cout << res << endl;

    return 0;
}