#include <iostream>

using namespace std;


int main()
{
    float Number1,Number2,res;
    char OperationType;
    cout << "Please enter Number1: ";
    cin >> Number1;
    cout << "Please enter Number2: ";
    cin >> Number2;
    cout << "Please entre Operation type: ";
    cin >> OperationType;

    switch(OperationType)
    {
        case('+'):
            res = Number1 + Number2;
            break;
        case('-'):
            res = Number1 - Number2;
            break;
        case('*'):
            res = Number1 * Number2;
            break;
        case('/'):
            res = Number1 / Number2;
            break;
        default:
            res = Number1 + Number2;
    };

    cout << res << endl;
    return 0;
}