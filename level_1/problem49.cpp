#include <iostream>

using namespace std;

int main()
{
    int ATMPIN;

    do{
        cout << "Please enter The code Pin: ";
        cin >> ATMPIN;
        if(ATMPIN == 1234)
        {
            cout << "Your Balance is: 7500\n";
            break;
        }
        cout << "Wrong PIN\n";
    }while(ATMPIN != 1234);

    return 0;
}