#include <iostream>

using namespace std;

int main()
{
    
    int day;
    do{
        cout << "Please enter a day: ";
        cin >> day;
        
        switch(day)
        {
            case(1):
                cout << "Its Sunday\n";
                break;
            case(2):
                cout << "Its Monday\n";
                break;
            case(3):
                cout << "Its Tuesday\n";
                break;
            case(4):
                cout << "Its Wednesday\n";
                break;
            case(5):
                cout << "Its Thursday\n";
                break;
            case(6):
                cout << "Its Friday\n";
                break;
            case(7):
                cout << "Its Saturday\n";
                break;
            default:
                cout << "Wrong Day\n";
        };

    }while(day < 1 || day > 7);

    return 0;
}