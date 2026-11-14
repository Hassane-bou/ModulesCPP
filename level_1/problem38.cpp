#include <iostream>

using namespace std;


int main()
{
    int number;
    do{
        cout << "Please enter a number: ";
        cin >> number;
    }while(number < 0);

    if(number == 2 || number == 1)
        cout << "Prime\n";
    for(int i = 2;i < number / 2 ;i++)
    {
        if(number % i == 0)
        {
            cout << "Not Prime\n";
            break;
        }
        if(i = number)
            cout << "Prime\n"; 
            
    }

}