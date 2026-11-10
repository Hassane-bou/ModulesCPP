#include <iostream>

using namespace std;

int main()
{
    string FirstName;
    string LastName;

    cout << "Plase enter First Name: " << endl;
    cin >> FirstName;
    cout << "Please enter Last Name: " << endl;
    cin >> LastName;


    cout << "Full Name is " << FirstName  + " " +  LastName <<endl;
    
    return 0;


}