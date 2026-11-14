#include <iostream>

using namespace std;

int main()
{
    int Grade;

    cout << "Please enter Your Grade: ";
    cin >> Grade;

    if(Grade >= 90 && Grade <= 100)
        cout << " A\n";
    else if(Grade >= 80 && Grade <= 89)
        cout << " B\n";
    else if(Grade >= 70 && Grade <= 79)
        cout << " C\n";
    else if(Grade >= 60 && Grade <= 69)
        cout << " D\n";
    else if(Grade >= 50 && Grade <= 59 )
        cout << " E\n";
    else
        cout << " F\n";

    return 0;
}