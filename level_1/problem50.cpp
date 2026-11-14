#include <iostream>

using namespace std;

int main()
{
    int ATMPIN;
    int counter = 0;
    do{
        cout << "Please enter The code Pin: ";
        cin >> ATMPIN;
        if(ATMPIN == 1234)
        {
            cout << "Your Balance is: 7500\n";
            break;
        }
        cout << "Wrong PIN\n";
        counter++;
        if(counter == 3)
        {
            cout << "Card is locked!\n";
            break;
        }
    }while(ATMPIN != 1234);

    return 0;
}