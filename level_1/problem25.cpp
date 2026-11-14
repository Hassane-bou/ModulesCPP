#include <iostream>

using namespace std;

int main()
{
    int age;
    do{
        cout << "Please  enter age , must be between 18 and 45: ";
        cin >> age;
        if(age < 18 || age > 45)
            cout << "Invalid Age\n";
    }while(age < 18 || age > 45);

    cout << "Valid Age\n";
        

    return 0;
}
