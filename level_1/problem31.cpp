#include <iostream>

using namespace std;

int main()
{
    int N;
    int pow2 = 1,pow3 = 1,pow4 = 1;
    cout << "Please entre N: ";
    cin >> N;

    for(int i = 1 ;i <= 2 ; i++)
        pow2 *= N;
    for(int i = 1 ;i <= 3 ; i++)
        pow3 *= N;
    for(int i = 1 ;i <= 4 ; i++)
        pow4 *= N;

    cout << pow2 << endl;
    cout << pow3 << endl;
    cout << pow4 << endl;


    return 0;
}