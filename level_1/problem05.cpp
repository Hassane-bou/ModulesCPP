#include <iostream>

using namespace std;

int main()
{
    int age;
    bool HasDriverlicense = true;
    bool HasRecommandation = true;

    cout << "Please enter your age: ";
    cin >> age;
    cout << "do you have driver license: ";
    cin >> HasDriverlicense;
    cout << "do you have a recommendation: ";
    cin >> HasRecommandation;

    if(HasRecommandation)
        cout << "Hired\n";
    else if(age > 21 && HasDriverlicense)
        cout <<  "Hired\n";
    else 
        cout << "Rejected\n";

    return 0;

}